if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int a_val = boost::any_cast<int>(a);
        int b_val = boost::any_cast<int>(b);
        if (a_val > b_val) {
            return a_val;
        } else if (b_val > a_val) {
            return b_val;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float a_val = boost::any_cast<float>(a);
        float b_val = boost::any_cast<float>(b);
        if (a_val > b_val) {
            return a_val;
        } else if (b_val > a_val) {
            return b_val;
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string a_val = boost::any_cast<string>(a);
        string b_val = boost::any_cast<string>(b);
        if (a_val.find(',') != string::npos) {
            replace(a_val.begin(), a_val.end(), ',', '.');
        }
        if (b_val.find(',') != string::npos) {
            replace(b_val.begin(), b_val.end(), ',', '.');
        }
        float a_float = stof(a_val);
        float b_float = stof(b_val);
        if (a_float > b_float) {
            return a_val;
        } else if (b_float > a_float) {
            return b_val;
        }
    }
    return "None";
}