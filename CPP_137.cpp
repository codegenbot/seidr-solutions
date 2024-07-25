if (a.type() == typeid(int) && b.type() == typeid(int)){
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
            return a;
        } else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
            return b;
        }
    } else if (a.type() == typeid(float) || b.type() == typeid(float)){
        float val_a, val_b;
        if (a.type() == typeid(int)){
            val_a = static_cast<float>(boost::any_cast<int>(a));
        } else {
            val_a = stof(boost::any_cast<string>(a));
        }
        if (b.type() == typeid(int)){
            val_b = static_cast<float>(boost::any_cast<int>(b));
        } else {
            val_b = stof(boost::any_cast<string>(b));
        }
        
        if (val_a > val_b){
            return a;
        } else if (val_a < val_b){
            return b;
        }
    } else {
        if (boost::any_cast<string>(a) > boost::any_cast<string> (b)) {
            return a;
        } else if (boost::any_cast<string>(a) < boost::any_cast<string>(b)) {
            return b;
        }
    }
    return "None";
}