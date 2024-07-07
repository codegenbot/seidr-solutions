```
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any(b);
    }
    if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return b;
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (stoi(a.convert_to<string>()) > stol(b.convert_to<string>())) {
            return a;
        } else if (stoi(a.convert_to<string>()) < stol(b.convert_to<string>())) {
            return b;
        } else {
            return boost::any("None");
        }
    }
    if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any(boost::any_cast<float>(a) > boost::any_cast<int>(b) ? a : b);
    }
    if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int x = boost::any_cast<int>(a);
        string s = boost::any_cast<string>(b);
        return boost::any(x > stol(s) ? a : b);
    }
    if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(b);
        string s = boost::any_cast<string>(a);
        return boost::any(stoi(s) > x ? a : b);
    }
    return boost::any(b > a ? b : a);
}