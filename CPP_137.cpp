Here is the completed code:

```cpp
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any_cast<int>(a) > boost::any_cast<int>(b) ? b : "None";
    }
    else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        return boost::any_cast<double>(a) > boost::any_cast<double>(b) ? a : "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        return stod(str1) > stod(str2) ? a : "None";
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b) > boost::any_cast<int>(a) ? b : "None";
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any_cast<int>(a) > boost::any_cast<double>(b) ? a : "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string str = boost::any_cast<string>(a);
        return stod(str) > boost::any_cast<double>(b) ? a : "None";
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        return boost::any_cast<double>(a) > stod(boost::any_cast<string>(b)) ? a : "None";
    }
    return "None";
}