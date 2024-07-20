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
    double num_a = stod(boost::any_cast<string>(a).replace(boost::any_cast<string>(a).find(','), 1, "."));
    double num_b = stod(boost::any_cast<string>(b).replace(boost::any_cast<string>(b).find(','), 1, "."));
    if(num_a > num_b){
        return a;
    } else if(num_a < num_b){
        return b;
    } else {
        return "None";
    }
} else if((typeid(a) == typeid(int) && typeid(b) == typeid(string)) || (typeid(a) == typeid(string) && typeid(b) == typeid(int))){
    double num_a = (typeid(a) == typeid(int)) ? boost::any_cast<int>(a) : stod(boost::any_cast<string>(a).replace(boost::any_cast<string>(a).find(','), 1, "."));
    double num_b = (typeid(b) == typeid(int)) ? boost::any_cast<int>(b) : stod(boost::any_cast<string>(b).replace(boost::any_cast<string>(b).find(','), 1, "."));
    if(num_a > num_b){
        return a;
    } else if(num_a < num_b){
        return b;
    } else {
        return "None";
    }
}