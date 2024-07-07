boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<float>(a);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str_a = boost::any_cast<string>(a);
        string str_b = boost::any_cast<string>(b);
        size_t pos = str_a.find(',');
        if (pos != string::npos) {
            str_a = str_a.substr(0, pos).erase(pos);
        }
        pos = str_b.find(',');
        if (pos != string::npos) {
            str_b = str_b.substr(0, pos).erase(pos);
        }
        return str_b > str_a ? b : a;
    } else if (a.type() == typeid(string)) {
        return b;
    } else if (b.type() == typeid(string)) {
        return a;
    }

    float f1 = boost::any_cast<float>(a);
    float f2 = boost::any_cast<float>(b);

    return f1 > f2 ? a : b == f1 ? boost::any("None") : b;
}