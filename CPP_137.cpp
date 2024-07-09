```
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int ai = boost::any_cast<int>(a);
        float bf = boost::any_cast<float>(b);
        return (ai > bf ? a : b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        int ai = boost::any_cast<int>(a);
        double bd = boost::any_cast<double>(b);
        return (ai > bd ? a : b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float af = boost::any_cast<float>(a);
        int bi = boost::any_cast<int>(b);
        return (af > bi ? a : b);
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        double ad = boost::any_cast<double>(a);
        int bi = boost::any_cast<int>(b);
        return (ad > bi ? a : b);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string as = boost::any_cast<string>(a);
        float bf = boost::any_cast<float>(b);
        double af = stod(as);
        return (af > bf ? a : b);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string as = boost::any_cast<string>(a);
        double bd = boost::any_cast<double>(b);
        double af = stod(as);
        return (af > bd ? a : b);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string as = boost::any_cast<string>(a);
        int bi = boost::any_cast<int>(b);
        double af = stod(as);
        return (af > bi ? a : b);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string as = boost::any_cast<string>(a);
        string bs = boost::any_cast<string>(b);
        double af = stod(as), bf = stod(bs);
        return ((af > bf) ? a : (bf > af) ? b : "None");
    }
    else {
        return "None";
    }
}