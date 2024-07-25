boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b) > boost::any_cast<int>(a) ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return boost::any_cast<string>(b) >= boost::any_cast<string>(a) ? b : a;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        double num = boost::any_cast<double>(a);
        return num > stod(str) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = boost::any_cast<string>(a);
        int num = boost::any_cast<int>(b);
        return stod(str) >= num ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string str = boost::any_cast<string>(a);
        double num = boost::any_cast<double>(b);
        return stod(str) > num ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = boost::any_cast<int>(a);
        int num2 = boost::any_cast<int>(b);
        return num1 > num2 ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double num1 = boost::any_cast<double>(a);
        double num2 = boost::any_cast<double>(b);
        return num1 > num2 ? a : b;
    }
    else {
        return "None";
    }
}