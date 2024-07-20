boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = any_cast<string>(b);
        float num = 0;
        size_t pos = str.find(',');
        if (pos != string::npos) {
            num = stof(str.substr(0, pos));
        } else {
            num = stof(str);
        }
        return a > num ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return a > any_cast<string>(b) ? a : "None";
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return a > boost::any_cast<int>(b) ? a : "None";
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return a > any_cast<float>(b) ? a : "None";
    }
    return "None";
}