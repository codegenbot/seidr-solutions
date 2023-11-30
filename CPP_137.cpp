boost::any compare_one(boost::any a, boost::any b) {
    // Check if a and b are of the same type
    if (a.type() != b.type()) {
        return "None";
    }

    // If a and b are both integers
    if (a.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        if (x > y) {
            return x;
        } else if (x < y) {
            return y;
        } else {
            return "None";
        }
    }

    // If a and b are both floats
    if (a.type() == typeid(float)) {
        float x = boost::any_cast<float>(a);
        float y = boost::any_cast<float>(b);
        if (x > y) {
            return x;
        } else if (x < y) {
            return y;
        } else {
            return "None";
        }
    }

    // If a and b are both strings
    if (a.type() == typeid(string)) {
        string x = boost::any_cast<string>(a);
        string y = boost::any_cast<string>(b);
        if (x > y) {
            return x;
        } else if (x < y) {
            return y;
        } else {
            return "None";
        }
    }

    return "None";
}