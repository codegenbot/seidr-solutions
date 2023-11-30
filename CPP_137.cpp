boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = boost::any_cast<int>(a);
        int num2 = boost::any_cast<int>(b);
        if (num1 > num2) {
            return num1;
        } else if (num1 < num2) {
            return num2;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float num1 = boost::any_cast<float>(a);
        float num2 = boost::any_cast<float>(b);
        if (num1 > num2) {
            return num1;
        } else if (num1 < num2) {
            return num2;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        replace(str1.begin(), str1.end(), ',', '.');
        replace(str2.begin(), str2.end(), ',', '.');
        float num1 = stof(str1);
        float num2 = stof(str2);
        if (num1 > num2) {
            return str1;
        } else if (num1 < num2) {
            return str2;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int num1 = boost::any_cast<int>(a);
        string str2 = boost::any_cast<string>(b);
        replace(str2.begin(), str2.end(), ',', '.');
        float num2 = stof(str2);
        if (num1 > num2) {
            return num1;
        } else if (num1 < num2) {
            return str2;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str1 = boost::any_cast<string>(a);
        int num2 = boost::any_cast<int>(b);
        replace(str1.begin(), str1.end(), ',', '.');
        float num1 = stof(str1);
        if (num1 > num2) {
            return str1;
        } else if (num1 < num2) {
            return num2;
        } else {
            return "None";
        }
    } else {
        return "None";
    }
}