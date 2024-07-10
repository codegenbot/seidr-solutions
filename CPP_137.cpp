boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b) > boost::any_cast<int>(a) ? b : a;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b) > boost::any_cast<int>(a) ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<float>(a) > boost::any_cast<int>(b) ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any_cast<double>(a) > boost::any_cast<int>(b) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = boost::any_cast<string>(b).erase(0, 1);
        float f = stof(str);
        return f > boost::any_cast<float>(a) ? b : a;
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string str = boost::any_cast<string>(b).erase(0, 1);
        double d = stod(str);
        return d > boost::any_cast<double>(a) ? b : a;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = boost::any_cast<string>(b).erase(0, 1);
        int i = stoi(str);
        return boost::any_cast<string>(a) > to_string(i) ? a : b;
    } else if (boost::any_cast<string>(a) == boost::any_cast<string>(b)) {
        return "None";
    }
    return b;
}