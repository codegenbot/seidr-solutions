if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int val_a = boost::any_cast<int>(a);
        int val_b = boost::any_cast<int>(b);
        if (val_a > val_b) {
            return val_a;
        } else if (val_a < val_b) {
            return val_b;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float val_a = boost::any_cast<float>(a);
        float val_b = boost::any_cast<float>(b);
        if (val_a > val_b) {
            return val_a;
        } else if (val_a < val_b) {
            return val_b;
        } else {
            return "None";
        }
    } else {
        string val_a = boost::any_cast<string>(a);
        string val_b = boost::any_cast<string>(b);
        // Replace ',' with '.' to handle European number format
        replace(val_a.begin(), val_a.end(), ',', '.');
        replace(val_b.begin(), val_b.end(), ',', '.');
        if (stof(val_a) > stof(val_b)) {
            return val_a;
        } else if (stof(val_a) < stof(val_b)) {
            return val_b;
        } else {
            return "None";
        }
    }
}