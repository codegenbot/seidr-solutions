```cpp
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return (x > y ? a : (y > x ? b : boost::any("None")));
    } else if ((a.type() == typeid(double) || a.type() == typeid(float)) &&
               (b.type() == typeid(double) || b.type() == typeid(float))) {
        double x = boost::any_cast<double>(a);
        double y = boost::any_cast<double>(b);
        return (x > y ? a : (y > x ? b : boost::any("None")));
    } else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
               (b.type() == typeid(string) || b.type() == typeid(wstring))) {
        string sx = boost::any_cast<string>(a);
        string sy = boost::any_cast<string>(b);
        return (sx > sy ? a : (sy > sx ? b : boost::any("None")));
    } else if (a.type() == typeid(int) && (b.type() == typeid(double) || b.type() == typeid(float))) {
        int x = boost::any_cast<int>(a);
        double y = boost::any_cast<double>(b);
        return (x > y ? a : (y > x ? b : boost::any("None")));
    } else if ((a.type() == typeid(double) || a.type() == typeid(float)) &&
               (b.type() == typeid(int))) {
        double x = boost::any_cast<double>(a);
        int y = boost::any_cast<int>(b);
        return (x > y ? a : (y > x ? b : boost::any("None")));
    } else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
               (b.type() == typeid(double) || b.type() == typeid(float))) {
        string sx = boost::any_cast<string>(a);
        double y = boost::any_cast<double>(b);
        return (sx > to_string(y) ? a : (to_string(y) > sx ? b : boost::any("None")));
    } else if ((a.type() == typeid(double) || a.type() == typeid(float)) &&
               (b.type() == typeid(string) || b.type() == typeid(wstring))) {
        double x = boost::any_cast<double>(a);
        string sy = boost::any_cast<string>(b);
        return (to_string(x) > sy ? a : (sy > to_string(x) ? b : boost::any("None")));
    } else {
        return boost::any("None");
    }
}