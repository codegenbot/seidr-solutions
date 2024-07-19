if(typeid(a) == typeid(int) && typeid(b) == typeid(int)) {
    if(boost::any_cast<int>(a) > boost::any_cast<int>(b)){
        return a;
    } else if(boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
        return b;
    } else {
        return "None";
    }
}

if(typeid(a) == typeid(float) && typeid(b) == typeid(float)) {
    if(boost::any_cast<float>(a) > boost::any_cast<float>(b)){
        return a;
    } else if(boost::any_cast<float>(a) < boost::any_cast<float>(b)) {
        return b;
    } else {
        return "None";
    }
}

if(typeid(a) == typeid(string) && typeid(b) == typeid(string)) {
    float fa = stof(boost::any_cast<string>(a));
    float fb = stof(boost::any_cast<string>(b));
    if(fa > fb){
        return a;
    } else if(fa < fb) {
        return b;
    } else {
        return "None";
    }
}

return "None";
}