```cpp
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return boost::any(b);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str_a = boost::any_cast<string>(a);
        string str_b = boost::any_cast<string>(b);
        if (str_a > str_b) {
            return a;
        } else if (str_a < str_b) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int val_a = boost::any_cast<int>(a);
        int val_b = boost::any_cast<int>(b);
        if (val_a > val_b) {
            return a;
        } else if (val_a < val_b) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float val_a = boost::any_cast<float>(a);
        int val_b = boost::any_cast<int>(b);
        if (val_a > val_b) {
            return a;
        } else if (val_a < val_b) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int val_a = boost::any_cast<int>(a);
        float val_b = boost::any_cast<float>(b);
        if (val_a > val_b) {
            return a;
        } else if (val_a < val_b) {
            return b;
        } else {
            return boost::any("None");
        }
    } else {
        return boost::any(b);
    }
}