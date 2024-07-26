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
    float floatA = stof(boost::any_cast<string>(a).replace(boost::any_cast<string>(a).find(','), 1, "."));
    float floatB = stof(boost::any_cast<string>(b).replace(boost::any_cast<string>(b).find(','), 1, "."));
    if(floatA > floatB){
        return a;
    } else if(floatA < floatB){
        return b;
    } else {
        return "None";
    }
} else if((a.type() == typeid(int) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(int))){
    float floatA = a.type() == typeid(int) ? boost::any_cast<int>(a) : stof(boost::any_cast<string>(a).replace(boost::any_cast<string>(a).find(','), 1, "."));
    float floatB = b.type() == typeid(int) ? boost::any_cast<int>(b) : stof(boost::any_cast<string>(b).replace(boost::any_cast<string>(b).find(','), 1, "."));
    if(floatA > floatB){
        return a;
    } else if(floatA < floatB){
        return b;
    } else {
        return "None";
    }
}