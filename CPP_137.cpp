using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    any_cast<double>(a);
    any_cast<double>(b);

    double d1 = 0;
    double d2 = 0;

    if (any_cast<bool>(is_double(a))) {
        d1 = any_cast<double>(a);
    }
    if (any_cast<bool>(is_double(b))) {
        d2 = any_cast<double>(b);
    }

    if (d1 > d2) return a;
    else if (d2 > d1) return b;

    string s1 = "";
    string s2 = "";

    if (any_cast<bool>(is_string(a))) {
        s1 = any_cast<string>(a);
    }
    if (any_cast<bool>(is_string(b))) {
        s2 = any_cast<string>(b);
    }

    if (s1 > s2) return a;
    else if (s2 > s1) return b;

    return "None";
}