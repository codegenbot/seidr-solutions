using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_float(a) && is_float(b)) {
        return boost::any(get_value<float>(a) > get_value<float>(b) ? a : b);
    } else if (is_integer(a) && is_integer(b)) {
        return boost::any(get_value<int>(a) > get_value<int>(b) ? a : b);
    } else if ((is_string(a) || contains_comma(a.as<std::string>())) &&
               (is_string(b) || contains_comma(b.as<std::string>()))) {
        auto a_str = a.as<std::string>();
        auto b_str = b.as<std::string>();

        return boost::any(a_str > b_str ? a : b);
    } else if ((is_integer(a) || is_float(a)) && (is_string(b) || contains_comma(b.as<std::string>()))) {
        auto a_val = get_value<int>(a);
        auto b_str = b.as<std::string>();

        return boost::any(stoi(b_str) > a_val ? b : boost::any("None"));
    } else if ((is_integer(b) || is_float(b)) && (is_string(a) || contains_comma(a.as<std::string>()))) {
        auto a_str = a.as<std::string>();
        auto b_val = get_value<int>(b);

        return boost::any(stoi(a_str) > b_val ? a : boost::any("None"));
    }

    return boost::any("None");
}

bool is_float(const boost::any& a) {
    return boost::any_cast<float*>(0) != 0;
}

bool is_integer(const boost::any& a) {
    return boost::any_cast<int*>(0) != 0;
}

bool is_string(const boost::any& a) {
    return !a.empty();
}

bool contains_comma(const std::string& s) {
    return s.find(',') != std::string::npos;
}