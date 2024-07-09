Here is the completed code:

```
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        if ((int)a.convert_to<int>() > (float)b.convert_to<float>()) {
            return b;
        } else if ((int)a.convert_to<int>() < (float)b.convert_to<float>()) {
            return b;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if (((string)b).find('.') != string::npos || ((string)b).find(',') != string::npos) {
            if ((int)a.convert_to<int>() > stod((string)b)) {
                return b;
            } else if ((int)a.convert_to<int>() < stod((string)b)) {
                return b;
            } else {
                return "None";
            }
        } else {
            if ((int)a.convert_to<int>() > stoi((string)b)) {
                return b;
            } else if ((int)a.convert_to<int>() < stoi((string)b)) {
                return b;
            } else {
                return "None";
            }
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        if ((float)a > (int)b) {
            return a;
        } else if ((float)a < (int)b) {
            return a;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        if (((string)a).find('.') != string::npos || ((string)a).find(',') != string::npos) {
            if (stod((string)a) > (float)b) {
                return a;
            } else if (stod((string)a) < (float)b) {
                return a;
            } else {
                return "None";
            }
        } else {
            if (stoi((string)a) > (int)b) {
                return a;
            } else if (stoi((string)a) < (int)b) {
                return a;
            } else {
                return "None";
            }
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (((string)a).find('.') != string::npos || ((string)a).find(',') != string::npos &&
            (((string)b).find('.') != string::npos || ((string)b).find(',') != string::npos)) {
            return (stod((string)a) > stod((string)b)) ? a : b;
        } else if (!(((string)a).find('.') == string::npos || ((string)a).find(',') == string::npos)) &&
                  !((((string)b).find('.') != string::npos || ((string)b).find(',') != string::npos))) {
            return (stoi((string)a) > (int)b) ? a : b;
        } else {
            if (stod((string)a) > (float)b) {
                return a;
            } else if (stod((string)a) < (float)b) {
                return a;
            } else {
                return "None";
            }
        }
    }
}