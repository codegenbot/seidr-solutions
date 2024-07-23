boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return a < b ? b : a;
    }
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return a < b ? b : a;
    }
    if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return a.convert_to<string>() <= b.convert_to<string>() ? "None" : b;
    }
    if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return a < b ? b : a;
    }
    if (a.type() == typeid(float) && b.type() == typeid(string)) {
        double da = stod(a.convert_to<string>());
        double db = stod(b.convert_to<string>());
        return da <= db ? "None" : boost::any(b);
    }
    if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double da = stod(a.convert_to<string>());
        double db = stod(b.convert_to<string>());
        return da <= db ? "None" : boost::any(b);
    }
    if (a.type() == typeid(string) && b.type() == typeid(int)) {
        double da = stod(a.convert_to<string>());
        int db = boost::any_cast<int>(b);
        return da <= db ? "None" : boost::any(a);
    }
    if (a.type() == typeid(string) && b.type() == typeid(float)) {
        double da = stod(a.convert_to<string>());
        float db = boost::any_cast<float>(b);
        return da <= db ? "None" : boost::any(a);
    }
    if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double da = stod(a.convert_to<string>());
        double db = boost::any_cast<double>(b);
        return da <= db ? "None" : boost::any(a);
    }
    return a > b ? b : a;
}