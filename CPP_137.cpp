Here is the completed code:

```cpp
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double da = stod(a.convert<string>().c_str());
        double db = boost::any_cast<double>(b);
        if (da > db) {
            return a;
        }
        else if (db > da) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double da = boost::any_cast<double>(a);
        double db = stod(b.convert<string>().c_str());
        if (da > db) {
            return a;
        }
        else if (db > da) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = a.convert<string>();
        string sb = b.convert<string>();
        double da = stod(sa.c_str());
        double db = stod(sb.c_str());
        if (da > db) {
            return a;
        }
        else if (db > da) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int ai = boost::any_cast<int>(a);
        string sb = b.convert<string>();
        double db = stod(sb.c_str());
        if (ai > db) {
            return a;
        }
        else if (db > ai) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string sa = a.convert<string>();
        int bi = boost::any_cast<int>(b);
        double da = stod(sa.c_str());
        if (da > bi) {
            return a;
        }
        else if (bi > da) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else {
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
            return a;
        }
        else if (boost::any_cast<int>(b) > boost::any_cast<int>(a)) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
}