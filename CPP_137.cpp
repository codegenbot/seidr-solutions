if (a.type() == typeid(int) && b.type() == typeid(int)) {
    if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
        return a;
    } else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
        return b;
    } else {
        return "None";
    }
} else if (a.type() == typeid(float) && b.type() == typeid(float)) {
    if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
        return a;
    } else if (boost::any_cast<float>(a) < boost::any_cast<float>(b)) {
        return b;
    } else {
        return "None";
    }
} else if (a.type() == typeid(string) && b.type() == typeid(string)) {
    string sa = boost::any_cast<string>(a);
    string sb = boost::any_cast<string>(b);
    if (sa.find_first_of(".,") != string::npos) {
        replace(sa.begin(), sa.end(), ',', '.');
    }
    if (sb.find_first_of(".,") != string::npos) {
        replace(sb.begin(), sb.end(), ',', '.');
    }
    if (stof(sa) > stof(sb)) {
        return a;
    } else if (stof(sa) < stof(sb)) {
        return b;
    } else {
        return "None";
    }
} else {
    return "None";
}