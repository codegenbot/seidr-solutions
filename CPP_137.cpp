if(a.type() == typeid(int) && b.type() == typeid(int)){
    if(boost::any_cast<int>(a) > boost::any_cast<int>(b)){
        return a;
    } else if(boost::any_cast<int>(a) < boost::any_cast<int>(b)){
        return b;
    } else {
        return "None";
    }
} else if(a.type() == typeid(float) && b.type() == typeid(float)){
    if(boost::any_cast<float>(a) > boost::any_cast<float>(b)){
        return a;
    } else if(boost::any_cast<float>(a) < boost::any_cast<float>(b)){
        return b;
    } else {
        return "None";
    }
} else if(a.type() == typeid(string) && b.type() == typeid(string)){
    float val1 = stof(boost::any_cast<string>(a));
    float val2 = stof(boost::any_cast<string>(b));
    if(val1 > val2){
        return a;
    } else if(val1 < val2){
        return b;
    } else {
        return "None";
    }
} else if((a.type() == typeid(int) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(int))){
    float val1 = (a.type() == typeid(int)) ? boost::any_cast<int>(a) : stof(boost::any_cast<string>(a));
    float val2 = (b.type() == typeid(int)) ? boost::any_cast<int>(b) : stof(boost::any_cast<string>(b));
    if(val1 > val2){
        return a;
    } else if(val1 < val2){
        return b;
    } else {
        return "None";
    }
}