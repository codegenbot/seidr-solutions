boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return (x > y ? &a : (y > x ? &b : boost::any("None")));
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = boost::any_cast<float>(a);
        float y = boost::any_cast<float>(b);
        return (x > y ? &a : (y > x ? &b : boost::any("None")));
    } else if ((a.type() == typeid(string) && b.type() != typeid(int)) ||
               (a.type() != typeid(int) && b.type() == typeid(int))) {
        string s1 = boost::any_cast<string>(a);
        string s2 = boost::any_cast<string>(b);
        return (s1 > s2 ? &a : (s2 > s1 ? &b : boost::any("None")));
    } else if ((a.type() == typeid(string) && b.type() == typeid(string))) {
        string s1 = boost::any_cast<string>(a);
        string s2 = boost::any_cast<string>(b);
        return (s1 > s2 ? &a : (s2 > s1 ? &b : boost::any("None")));
    } else {
        return boost::any("Invalid input");
    }
}