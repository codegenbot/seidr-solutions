using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        if (str1 > str2) {
            return a;
        } else if (str1 < str2) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int num1 = boost::any_cast<int>(a);
        string str2 = boost::any_cast<string>(b);
        if (num1 > stoi(str2)) {
            return a;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int num2 = boost::any_cast<int>(b);
        string str1 = boost::any_cast<string>(a);
        if (stoi(str1) > num2) {
            return a;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        int num2 = boost::any_cast<int>(b);
        float num1 = boost::any_cast<float>(a);
        if (num1 > num2) {
            return a;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        float num2 = boost::any_cast<float>(b);
        int num1 = boost::any_cast<int>(a);
        if (num1 > num2) {
            return a;
        } else {
            return boost::any("None");
        }
    }

    return a;
}