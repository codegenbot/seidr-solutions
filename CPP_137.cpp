boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int)a > (int)b ? a : ((int)a == (int)b) ? boost::any("None") : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (float)a > (float)b ? a : ((float)a == (float)b) ? boost::any("None") : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (string)a > (string)b ? a : ((string)a == (string)b) ? boost::any("None") : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        if ((int)a > (float)b) {
            return a;
        } 
        else if ((int)a < (float)b) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if (stoi((string)b) > (int)a) {
            return b;
        } 
        else if (stoi((string)b) < (int)a) {
            return a;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        if ((float)a > (int)b) {
            return a;
        } 
        else if ((float)a < (int)b) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        if (stof((string)b) > (float)a) {
            return b;
        } 
        else if (stof((string)b) < (float)a) {
            return a;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        if (stoi((string)a) > (int)b) {
            return a;
        } 
        else if (stoi((string)a) < (int)b) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        if (stof((string)a) > (float)b) {
            return a;
        } 
        else if (stof((string)a) < (float)b) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    return a; // default to the first value
}