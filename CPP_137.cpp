using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (any_cast<int>(a) > any_cast<int>(b)) {
        return a;
    } else if (any_cast<int>(b) > any_cast<int>(a)) {
        return b;
    } else if (is_any_of<string>(a) && is_any_of<string>(b)) {
        return (any_cast<string>(a) > any_cast<string>(b)) ? a : b;
    } else if (is_any_of<string>(a)) {
        return "None";
    } else if (is_any_of<string>(b)) {
        return "None";
    } else {
        return max(a, b);
    }
}