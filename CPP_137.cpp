if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) return a;
        else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) return b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) return a;
        else if (boost::any_cast<float>(a) < boost::any_cast<float>(b)) return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str_a = boost::any_cast<string>(a);
        string str_b = boost::any_cast<string>(b);
        float val_a, val_b;
        if (str_a.find(",") != string::npos) {
            replace(str_a.begin(), str_a.end(), ',', '.');
        }
        if (str_b.find(",") != string::npos) {
            replace(str_b.begin(), str_b.end(), ',', '.');
        }
        val_a = stof(str_a);
        val_b = stof(str_b);
        if (val_a > val_b) return a;
        else if (val_a < val_b) return b;
    }
    return "None";
}