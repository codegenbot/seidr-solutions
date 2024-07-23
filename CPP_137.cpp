boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)boost::any_cast<float>(b) > a.cast_to<int()) ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)boost::any_cast<int>(a) > boost::any_cast<int>(b) ? a : boost::any(b);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return ((string)boost::any_cast<string>(b) >= (string)boost::any_cast<string>(a)) ? b : a;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int a_int = boost::any_cast<int>(a);
        string b_str = boost::any_cast<string>(b);
        return stoi(b_str) >= a_int ? b : a;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int a_int = boost::any_cast<int>(a);
        string b_str = boost::any_cast<string>(b);
        return stoi(b_str) >= a_int ? b : a;
    } else {
        return boost::any("None");
    }
}