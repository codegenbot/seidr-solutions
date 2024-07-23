boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        size_t pos1 = str1.find(',');
        size_t pos2 = str2.find(',');
        double num1 = stod(str1.substr(0, pos1));
        double num2 = stod(str2.substr(0, pos2));
        if (num1 > num2) {
            return a;
        } else if (num1 < num2) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(string)) {
        string str = any_cast<string>(a);
        size_t pos = str.find(',');
        double num = stod(str.substr(0, pos));
        if (num > b.convert_to<double>()) {
            return a;
        } else if (num < b.convert_to<double>()) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (b.type() == typeid(string)) {
        string str = any_cast<string>(b);
        size_t pos = str.find(',');
        double num = stod(str.substr(0, pos));
        if (a.convert_to<double>() > num) {
            return a;
        } else if (a.convert_to<double>() < num) {
            return b;
        } else {
            return boost::any("None");
        }
    } else {
        double num1 = any_cast<double>(a);
        double num2 = any_cast<double>(b);
        if (num1 > num2) {
            return a;
        } else if (num1 < num2) {
            return b;
        } else {
            return boost::any("None");
        }
    }
}