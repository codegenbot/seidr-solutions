if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
            return a;
        } else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
            return b;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
            return a;
        } else if (boost::any_cast<float>(a) < boost::any_cast<float>(b)) {
            return b;
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        float val_a = stof(boost::any_cast<string>(a).replace(boost::any_cast<string>(a).find(','), 1, "."));
        float val_b = stof(boost::any_cast<string>(b).replace(boost::any_cast<string>(b).find(','), 1, "."));
        if (val_a > val_b) {
            return a;
        } else if (val_a < val_b) {
            return b;
        }
    }
    return "None";
}