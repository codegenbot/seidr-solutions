boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any(b);
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return boost::any(b);
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if ((int)a < (int)b) {
            return b;
        } else if ((int)a > (int)b) {
            return a;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        if ((float)a < (float)b) {
            return b;
        } else if ((float)a > (float)b) {
            return a;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        if ((double)a < (double)b) {
            return b;
        } else if ((double)a > (double)b) {
            return a;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        if ((int)stoi(a.convert_to<string>()) < (int)b) {
            return b;
        } else if ((int)stoi(a.convert_to<string>()) > (int)b) {
            return a;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        if ((float)stod(a.convert_to<string>()) < (float)b) {
            return b;
        } else if ((float)stod(a.convert_to<string>()) > (float)b) {
            return a;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        if ((double)stod(a.convert_to<string>()) < (double)b) {
            return b;
        } else if ((double)stod(a.convert_to<string>()) > (double)b) {
            return a;
        } else {
            return boost::any("None");
        }
    } else {
        if (a.convert_to<int>() > b.convert_to<int>()) {
            return a;
        } else if (a.convert_to<int>() < b.convert_to<int>()) {
            return b;
        } else {
            return boost::any("None");
        }
    }
}