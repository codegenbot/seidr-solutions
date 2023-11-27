boost::any compare_one(boost::any a, boost::any b){
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int val_a = boost::any_cast<int>(a);
        int val_b = boost::any_cast<int>(b);
        if (val_a > val_b) {
            return val_a;
        } else if (val_a < val_b) {
            return val_b;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float val_a = boost::any_cast<float>(a);
        float val_b = boost::any_cast<float>(b);
        if (val_a > val_b) {
            return val_a;
        } else if (val_a < val_b) {
            return val_b;
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string val_a = boost::any_cast<string>(a);
        string val_b = boost::any_cast<string>(b);
        if (val_a > val_b) {
            return val_a;
        } else if (val_a < val_b) {
            return val_b;
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int val_a = boost::any_cast<int>(a);
        string val_b = boost::any_cast<string>(b);
        return val_b;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string val_a = boost::any_cast<string>(a);
        int val_b = boost::any_cast<int>(b);
        return val_a;
    }
    
    return "None";
}