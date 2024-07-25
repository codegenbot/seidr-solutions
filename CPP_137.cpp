boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b) > boost::any_cast<int>(a) ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<float>(a) > boost::any_cast<int>(b) ? a : boost::any_cast<int>(b);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a), strB = boost::any_cast<string>(b);
        return strB > strA ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int numA = boost::any_cast<int>(a), numB = 0;
        if (boost::any_cast<string>(b).find(',') != string::npos) {
            size_t commaPos = boost::any_cast<string>(b).find(',');
            numB = stoi(boost::any_cast<string>(b).substr(0, commaPos));
        }
        else {
            numB = stoi(boost::any_cast<string>(b));
        }
        return numA > numB ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int numA = 0, numB = boost::any_cast<int>(b);
        if (boost::any_cast<string>(a).find(',') != string::npos) {
            size_t commaPos = boost::any_cast<string>(a).find(',');
            numA = stoi(boost::any_cast<string>(a).substr(0, commaPos));
        }
        else {
            numA = stoi(boost::any_cast<string>(a));
        }
        return numA > numB ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float fltA = boost::any_cast<float>(a), fltB = boost::any_cast<int>(b);
        return fltA > fltB ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        float fltA = boost::any_cast<int>(a), fltB = boost::any_cast<float>(b);
        return fltA > fltB ? a : b;
    }
    return "None";
}