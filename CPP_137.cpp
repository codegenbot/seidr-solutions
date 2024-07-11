if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int a_int = boost::any_cast<int>(a);
        int b_int = boost::any_cast<int>(b);
        if (a_int > b_int) {
            return a_int;
        }
        else if (a_int < b_int) {
            return b_int;
        }
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float a_float = boost::any_cast<float>(a);
        float b_float = boost::any_cast<float>(b);
        if (a_float > b_float) {
            return a_float;
        }
        else if (a_float < b_float) {
            return b_float;
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string a_str = boost::any_cast<string>(a);
        string b_str = boost::any_cast<string>(b);
        if (a_str > b_str) {
            return a_str;
        }
        else if (a_str < b_str) {
            return b_str;
        }
    }
    return "None";
}