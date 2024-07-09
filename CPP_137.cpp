boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (double)a < (double)b ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if ((int)a < boost::any_cast<string>(b).find(','))
            return a;
        else
            return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        string s = boost::any_cast<string>(b);
        if ((double)a > stod(s.substr(0, s.find(','))))
            return a;
        else
            return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        if (stod(boost::any_cast<string>(a).substr(0, boost::any_cast<string>(a).find(',')).c_str()) > (int)b)
            return a;
        else
            return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string s = boost::any_cast<string>(b);
        if (stod(s.substr(0, s.find(',')).c_str()) > stod(boost::any_cast<string>(a).substr(0, boost::any_cast<string>(a).find(',')).c_str()))
            return b;
        else
            return a;
    }
    else {
        return "None";
    }
}