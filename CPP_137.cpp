using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_same<any_type, float>(a.type()) && is_same<any_type, float>(b.type())) {
        return a > b ? a : b;
    } else if (is_same<any_type, double>(a.type()) && is_same<any_type, double>(b.type())) {
        return a > b ? a : b;
    } else if (is_same<any_type, string>(a.type()) && is_same<any_type, string>(b.type())) {
        string str_a = boost::any_cast<string>(a);
        string str_b = boost::any_cast<string>(b);
        return str_a > str_b ? a : b;
    } else if (is_same<any_type, int>(a.type()) && is_same<any_type, int>(b.type())) {
        return a > b ? a : b;
    }
    return any("None");
}