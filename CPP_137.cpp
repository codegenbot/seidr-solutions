using boost::any_cast;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return any_cast<float>(b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return any_cast<double>(b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string s = any_cast<string>(b);
        int num;
        istringstream iss(s);
        iss >> num;
        return max(a, boost::any(num));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return any_cast<double>(b);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int num = any_cast<int>(a);
        string s = any_cast<string>(b);
        istringstream iss(s);
        int num2;
        iss >> num2;
        return max(num, num2);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double d = any_cast<double>(b);
        string s = any_cast<string>(a);
        istringstream iss(s);
        double d2;
        iss >> d2;
        return max(d, d2);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = any_cast<string>(a);
        string s2 = any_cast<string>(b);
        istringstream iss1(s1), iss2(s2);
        double d1, d2;
        iss1 >> d1;
        iss2 >> d2;
        if (d1 > d2) return a;
        else if (d1 < d2) return b;
        else return boost::any("None");
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int num = any_cast<int>(a);
        string s = any_cast<string>(b);
        istringstream iss(s);
        int num2;
        iss >> num2;
        return max(num, num2);
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        double d = any_cast<double>(a);
        int num = any_cast<int>(b);
        return max(d, num);
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double d = any_cast<double>(a);
        string s = any_cast<string>(b);
        istringstream iss(s);
        double d2;
        iss >> d2;
        return max(d, d2);
    }
    else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        return max(a, b);
    }
    else {
        return boost::any("None");
    }
}