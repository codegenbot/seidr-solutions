using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<int>(a) && is_any_of<int>(b)) {
        return any_cast<int>(a) > any_cast<int>(b) ? a : (any_cast<int>(a) < any_cast<int>(b) ? b : boost::any("None"));
    } else if (is_any_of<float>(a) && is_any_of<float>(b)) {
        return any_cast<float>(a) > any_cast<float>(b) ? a : (any_cast<float>(a) < any_cast<float>(b) ? b : boost::any("None"));
    } else if (is_any_of<string>(a) && is_any_of<string>(b)) {
        return !any_cast<string>(a).compare(0, string::npos, any_cast<string>(b), 0, string::npos) ? a : b;
    } else {
        throw invalid_argument("Invalid types");
    }
}