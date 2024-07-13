```cpp
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (float)a < (float)b ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (double)a < (double)b ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if ((string)a < b) {
            return a;
        } 
        else if (((string)a) == b) {
            return boost::any("None");
        } 
        else {
            return b;
        }
    }
    else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return (double)a < (double)b ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        if ((string)a > to_string(b)) {
            return a;
        } 
        else if (((string)a) == to_string(b)) {
            return boost::any("None");
        } 
        else {
            return boost::any(to_string(b));
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float a_float = stof((string)a);
        float b_float = (float)b;
        if (a_float > b_float) {
            return a;
        } 
        else if (a_float == b_float) {
            return boost::any("None");
        } 
        else {
            return boost::any(to_string(b_float));
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double a_double = stod((string)a);
        double b_double = (double)b;
        if (a_double > b_double) {
            return a;
        } 
        else if (a_double == b_double) {
            return boost::any("None");
        } 
        else {
            return boost::any(to_string(b_double));
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (((string)a) > b) {
            return a;
        } 
        else if (((string)a) == b) {
            return boost::any("None");
        } 
        else {
            return b;
        }
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a > (int)b ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(float)) {
        return (double)a > (float)b ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double a_double = (double)a;
        string b_string = (string)b;
        if (stod(b_string) < a_double) {
            return a;
        } 
        else if (stod(b_string) == a_double) {
            return boost::any("None");
        } 
        else {
            return boost::any(b_string);
        }
    }
    else {
        return a > b ? a : b;
    }
}