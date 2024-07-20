if(a.type() == typeid(int) && b.type() == typeid(int)) {
        if(boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
            return a;
        } else if(boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
            return b;
        } else {
            return "None";
        }
    } else if(a.type() == typeid(float) && b.type() == typeid(float)) {
        if(boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
            return a;
        } else if(boost::any_cast<float>(a) < boost::any_cast<float>(b)) {
            return b;
        } else {
            return "None";
        }
    } else if(a.type() == typeid(string) && b.type() == typeid(string)) {
        float value1 = stof(boost::any_cast<string>(a));
        float value2 = stof(boost::any_cast<string>(b));
        if(value1 > value2) {
            return a;
        } else if(value1 < value2) {
            return b;
        } else {
            return "None";
        }
    } else {
        return "None";
    }
}