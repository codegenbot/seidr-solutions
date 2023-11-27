boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        if (x > y) {
            return x;
        } else if (x < y) {
            return y;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = boost::any_cast<float>(a);
        float y = boost::any_cast<float>(b);
        if (x > y) {
            return x;
        } else if (x < y) {
            return y;
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string x = boost::any_cast<string>(a);
        string y = boost::any_cast<string>(b);
        if (x > y) {
            return x;
        } else if (x < y) {
            return y;
        }
    } else if ((a.type() == typeid(int) && b.type() == typeid(string)) ||
               (a.type() == typeid(string) && b.type() == typeid(int))) {
        string x, y;
        if (a.type() == typeid(int)) {
            x = to_string(boost::any_cast<int>(a));
            y = boost::any_cast<string>(b);
        } else {
            x = boost::any_cast<string>(a);
            y = to_string(boost::any_cast<int>(b));
        }
        if (x > y) {
            return x;
        } else if (x < y) {
            return y;
        }
    }
    return "None";
}