Here is the completed code:

```cpp
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return (x > y ? &a : (y > x ? &b : boost::any("None")));
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = boost::any_cast<float>(a);
        float y = boost::any_cast<float>(b);
        return (x > y ? &a : (y > x ? &b : boost::any("None")));
    } else if ((a.type() == typeid(int) && b.type() == typeid(float)) ||
               (a.type() == typeid(float) && b.type() == typeid(int))) {
        double x = boost::any_cast<double>(a);
        double y = boost::any_cast<double>(b);
        return (x > y ? &a : (y > x ? &b : boost::any("None")));
    } else if ((a.type() == typeid(string) && b.type() == typeid(string))) {
        string s1 = boost::any_cast<string>(a);
        string s2 = boost::any_cast<string>(b);
        return (s1.compare(s2) > 0 ? &a : (s2.compare(s1) > 0 ? &b : boost::any("None")));
    } else {
        return boost::any("Invalid input");
    }
}