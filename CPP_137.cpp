Here is the completed code:

```cpp
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b) > a.convert_to<int()) ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<int>(a) > b.convert_to<float()) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);
        return sa > sb ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float af = boost::any_cast<float>(a);
        string bf = boost::any_cast<string>(b);
        if (bf.length() > 0 && bf[0] == '.') {
            return af > stod(bf.substr(1)) ? a : b;
        }
        else if (bf.length() > 0 && bf[0] == ',') {
            return af > stof(bf.substr(1)) ? a : b;
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float bf = boost::any_cast<float>(b);
        string af = boost::any_cast<string>(a);
        if (af.length() > 0 && af[0] == '.') {
            return stod(af.substr(1)) > bf ? a : b;
        }
        else if (af.length() > 0 && af[0] == ',') {
            return stof(af.substr(1)) > bf ? a : b;
        }
    }
    return "None";
}