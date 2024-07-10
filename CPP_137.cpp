boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a < (double)b ? &b : "None";
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a > (int)b ? &b : "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return a.convert<string>() >= b.convert<string>() ? &b : "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        return a.convert<string>() >= boost::any_cast<double>(b) ? &b : "None";
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        return boost::any_cast<double>(a) > boost::any_cast<double>(b) ? &b : "None";
    }
    else {
        return "None";
    }
}