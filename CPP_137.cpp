```
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > (int)a ? b : "None";
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = (string)b;
        int val = 0;
        bool isDecimal = false;
        for (char c : str) {
            if (!isDecimal && (c == '.' || c == ',')) {
                isDecimal = true;
                continue;
            }
            if (isdigit(c)) {
                val = val * 10 + (c - '0');
            }
        }
        return val > a.convert_to<int>() ? b : "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = (string)a;
        string str2 = (string)b;
        int val1 = 0, val2 = 0;
        bool isDecimal1 = false, isDecimal2 = false;
        for (char c : str1) {
            if (!isDecimal1 && (c == '.' || c == ',')) {
                isDecimal1 = true;
                continue;
            }
            if (isdigit(c)) {
                val1 = val1 * 10 + (c - '0');
            }
        }
        for (char c : str2) {
            if (!isDecimal2 && (c == '.' || c == ',')) {
                isDecimal2 = true;
                continue;
            }
            if (isdigit(c)) {
                val2 = val2 * 10 + (c - '0');
            }
        }
        return val1 > val2 ? a : b == a ? "None" : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = (string)b;
        float val = 0.0f;
        bool isDecimal = false;
        for (char c : str) {
            if (!isDecimal && (c == '.' || c == ',')) {
                isDecimal = true;
                continue;
            }
            if (isdigit(c)) {
                val = val * 10 + (c - '0');
            }
        }
        return a.convert_to<float>() > val ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = (string)a;
        float val = a.convert_to<float>();
        bool isDecimal = false;
        for (char c : str) {
            if (!isDecimal && (c == '.' || c == ',')) {
                isDecimal = true;
                continue;
            }
            if (isdigit(c)) {
                val = val * 10 + (c - '0');
            }
        }
        return val > a.convert_to<float>() ? a : "None";
    }
    else {
        return a > b ? a : b == a ? "None" : b;
    }
}