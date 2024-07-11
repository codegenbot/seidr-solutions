```
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    }
    if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if (static_cast<int>(b.convert_to<string>()) > a.convert_to<int>())
            return b;
        else
            return boost::any("None");
    }
    if (a.type() == typeid(string) && b.type() == typeid(int)) {
        if (static_cast<int>(a.convert_to<string>()) > b.convert_to<int>())
            return a;
        else
            return boost::any("None");
    }
    if (a.type() == typeid(double) && b.type() == typeid(string)) {
        string s = b.convert_to<string>();
        double d;
        if (s.find('.') != std::string::npos || s.find(',') != std::string::npos) {
            d = stod(s);
        } else {
            d = stof(s);
        }
        if (d > a.convert_to<double>())
            return b;
        else
            return boost::any("None");
    }
    if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string s = a.convert_to<string>();
        double d;
        if (s.find('.') != std::string::npos || s.find(',') != std::string::npos) {
            d = stod(s);
        } else {
            d = stof(s);
        }
        if (d > b.convert_to<double>())
            return a;
        else
            return boost::any("None");
    }
    if (a.type() == typeid(double) && b.type() == typeid(double)) {
        if (a.convert_to<double>() > b.convert_to<double>())
            return a;
        else
            return boost::any("None");
    }
    return a;
}