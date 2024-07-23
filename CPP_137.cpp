boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if (boost::any_cast<int>(a) > boost::any_cast<string>(b).erase(0, 1).erase(-2, -1).convert_to<int>()) {
            return a;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<float>(a);
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any_cast<double>(a);
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        if (boost::any_cast<string>(a).erase(0, 1).erase(-2, -1).convert_to<int>() > b.convert_to<int>()) {
            return a;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        double a_val = boost::any_cast<string>(a).erase(0, 1).erase(-2, -1).convert_to<double>();
        double b_val = boost::any_cast<float>(b);
        return (a_val > b_val) ? a : ((a_val < b_val) ? "None" : a);
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double a_val = boost::any_cast<string>(a).erase(0, 1).erase(-2, -1).convert_to<double>();
        double b_val = boost::any_cast<double>(b);
        return (a_val > b_val) ? a : ((a_val < b_val) ? "None" : a);
    } else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return (boost::any_cast<float>(a) > boost::any_cast<double>(b)) ? a : ((boost::any_cast<float>(a) < boost::any_cast<double>(b)) ? "None" : a);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        double a_val = boost::any_cast<string>(a).erase(0, 1).erase(-2, -1).convert_to<double>();
        double b_val = boost::any_cast<string>(b).erase(0, 1).erase(-2, -1).convert_to<double>();
        return (a_val > b_val) ? a : ((a_val < b_val) ? "None" : "None");
    }
    return "None";
}