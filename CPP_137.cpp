boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if (stoi(to_string(b)) > a.convert_to<int>())
            return b;
        else
            return "None";
    } else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b);
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        if (stod(b.convert_to<string>()) > a.convert_to<int>())
            return b;
        else
            return "None";
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        if (stod(b.convert_to<string>()) > stod(a.convert_to<string>()))
            return b;
        else
            return "None";
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        if (stod(b.convert_to<string>()) > stod(a.convert_to<string>()))
            return b;
        else
            return "None";
    }
    if (stod(a.convert_to<string>()) > stod(b.convert_to<string>()))
        return a;
    else if (stod(a.convert_to<string>()) < stod(b.convert_to<string>()))
        return b;
    else
        return "None";
}