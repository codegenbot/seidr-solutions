boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int intA = boost::any_cast<int>(a);
        float fltB = boost::any_cast<float>(b);
        return (intA > fltB) ? a : ((intA < fltB) ? b : b);
    }
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        int intA = boost::any_cast<int>(a);
        double dblB = boost::any_cast<double>(b);
        return (intA > dblB) ? a : ((intA < dblB) ? b : b);
    }
    if (a.type() == typeid(float) && b.type() == typeid(double)) {
        float fltA = boost::any_cast<float>(a);
        double dblB = boost::any_cast<double>(b);
        return (fltA > dblB) ? a : ((fltA < dblB) ? b : b);
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        if (strA > strB) {
            return a;
        } else if (strA < strB) {
            return b;
        } else {
            return b;
        }
    }
    if ((a.type() == typeid(int) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(int))) {
        int intA = boost::any_cast<int>(a);
        string strB = boost::any_cast<string>(b);
        return (strB > to_string(intA)) ? b : a;
    }
    if ((a.type() == typeid(float) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(float))) {
        float fltA = boost::any_cast<float>(a);
        string strB = boost::any_cast<string>(b);
        return (strB > to_string(fltA)) ? b : a;
    }
    if ((a.type() == typeid(double) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(double))) {
        double dblA = boost::any_cast<double>(a);
        string strB = boost::any_cast<string>(b);
        return (strB > to_string(dblA)) ? b : a;
    }
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int intA = boost::any_cast<int>(a);
        int intB = boost::any_cast<int>(b);
        return (intA > intB) ? a : ((intA < intB) ? b : b);
    }
    if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float fltA = boost::any_cast<float>(a);
        float fltB = boost::any_cast<float>(b);
        return (fltA > fltB) ? a : ((fltA < fltB) ? b : b);
    }
    if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double dblA = boost::any_cast<double>(a);
        double dblB = boost::any_cast<double>(b);
        return (dblA > dblB) ? a : ((dblA < dblB) ? b : b);
    }
    return a;
}