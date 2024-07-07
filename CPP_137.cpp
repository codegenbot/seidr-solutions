boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (boost::any_cast<float>(b) > boost::any_cast<float>(a)) ? b : a;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        return strB > strA ? b : a;
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any(b);
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string strA = boost::any_cast<string>(a);
        int intB = boost::any_cast<int>(b);
        return to_string(intB) > strA ? b : a;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int intA = boost::any_cast<int>(a);
        string strB = boost::any_cast<string>(b);
        return to_string(intA) > strB ? a : b;
    } else {
        return "None";
    }
}