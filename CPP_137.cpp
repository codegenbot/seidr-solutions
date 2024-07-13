boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = (string)b;
        size_t pos = str.find(',');
        if (pos != string::npos) {
            str = str.substr(0, pos);
        }
        return (float)a > stof(str) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        size_t pos1 = (string)a.find(',');
        size_t pos2 = (string)b.find(',');
        if (pos1 != string::npos) {
            (string)a = (string)a.substr(0, pos1);
        }
        if (pos2 != string::npos) {
            (string)b = (string)b.substr(0, pos2);
        }
        return stof((string)a) > stof((string)b) ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        size_t pos = (string)b.find(',');
        if (pos != string::npos) {
            (string)b = (string)b.substr(0, pos);
        }
        return (int)a > stof((string)b) ? a : boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        size_t pos = (string)a.find(',');
        if (pos != string::npos) {
            (string)a = (string)a.substr(0, pos);
        }
        return stof((string)a) > (int)b ? a : boost::any("None");
    }
    else {
        return boost::any("None");
    }
}