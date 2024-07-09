Here is the completed code:

```cpp
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int) a > (double) b ? b : a;
    }
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int) a > (float) b ? b : a;
    }
    if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double) a > (int) b ? b : a;
    }
    if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float) a > (int) b ? b : a;
    }
    if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double da = atof(a.convert_to<string>().c_str());
        double db = (double) b;
        return da > db ? a : boost::any(b);
    }
    if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float df = atof(b.convert_to<string>().c_str());
        double da = atof(a.convert_to<string>().c_str());
        return da > df ? a : boost::any(b);
    }
    if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int di = stoi(a.convert_to<string>().c_str());
        int db = (int) b;
        return di > db ? a : boost::any(b);
    }
    if (a.convert_to<string>() == "None" || b.convert_to<string>() == "None") {
        return "None";
    }
    if ((a.type() == typeid(string)) && (b.type() == typeid(string))) {
        return a.convert_to<string>() > b.convert_to<string>() ? a : b;
    }
    throw std::runtime_error("Invalid type");
}