```
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any(b);
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any(b);
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if ((boost::any_cast<string>(b)).find(',') != string::npos || (boost::any_cast<string>(b)).find('.') != string::npos) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return a;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        if ((boost::any_cast<string>(a)).find(',') != string::npos || (boost::any_cast<string>(a)).find('.') != string::npos) {
            return a;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        if ((boost::any_cast<string>(b)).find(',') != string::npos || (boost::any_cast<string>(b)).find('.') != string::npos) {
            return boost::any("None");
        } else {
            return a;
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        if ((boost::any_cast<string>(a)).find(',') != string::npos || (boost::any_cast<string>(a)).find('.') != string::npos) {
            return boost::any("None");
        } else {
            return a;
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if ((boost::any_cast<string>(a)).compare((boost::any_cast<string>(b))) > 0) {
            return a;
        } else if ((boost::any_cast<string>(a)).compare((boost::any_cast<string>(b)))) < 0) {
            return b;
        } else {
            return boost::any("None");
        }
    } else {
        return boost::any("None");
    }
}