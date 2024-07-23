Here is the completed code:

```cpp
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    }
    if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double da = boost::any_cast<double>(a);
        double db = boost::any_cast<double>(b);
        if (da > db)
            return a;
        else if (db > da)
            return b;
        else
            return boost::any("None");
    }
    if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double db = boost::any_cast<double>(b);
        return (boost::any_cast<string>(a) + " > " + to_string(db) ? a : b).type() == typeid(string) ? a : b;
    }
    if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double da = boost::any_cast<double>(a);
        return (to_string(da) + " > " + boost::any_cast<string>(b) ? a : b).type() == typeid(string) ? a : b;
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);
        return (sa > sb ? a : sb).type() == typeid(string) ? a : b;
    }
    return "None";
}