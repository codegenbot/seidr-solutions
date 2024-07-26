if(typeid(a) == typeid(int) && typeid(b) == typeid(int)){
        if(boost::any_cast<int>(a) > boost::any_cast<int>(b)){
            return a;
        } else if(boost::any_cast<int>(a) < boost::any_cast<int>(b)){
            return b;
        } else {
            return "None";
        }
    } else if(typeid(a) == typeid(float) && typeid(b) == typeid(float)){
        if(boost::any_cast<float>(a) > boost::any_cast<float>(b)){
            return a;
        } else if(boost::any_cast<float>(a) < boost::any_cast<float>(b)){
            return b;
        } else {
            return "None";
        }
    } else if(typeid(a) == typeid(string) && typeid(b) == typeid(string)){
        if(stod(boost::any_cast<string>(a)) > stod(boost::any_cast<string>(b))){
            return a;
        } else if(stod(boost::any_cast<string>(a)) < stod(boost::any_cast<string>(b))){
            return b;
        } else {
            return "None";
        }
    } else {
        return "None";
    }
}