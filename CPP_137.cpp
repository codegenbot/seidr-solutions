boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return b;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        istringstream iss(str2);
        float num2;
        iss >> num2;
        return (num1 > num2 ? a : b).type() == typeid(float) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        return (str1 > str2 ? a : b).type() == typeid(int) ? boost::any(int(0)) : a;
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = boost::any_cast<int>(a);
        int num2 = boost::any_cast<int>(b);
        return (num1 > num2 ? a : b).type() == typeid(float) ? boost::any(0.0f) : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float num1 = boost::any_cast<float>(a);
        float num2 = boost::any_cast<float>(b);
        return (num1 > num2 ? a : b).type() == typeid(string) ? boost::any("None") : a;
    }
    return boost::any("None");
}