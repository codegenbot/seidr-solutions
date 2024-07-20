if(a == b) return "None";
if(typeid(a) == typeid(int) && typeid(b) == typeid(float)) {
    if(boost::any_cast<int>(a) > boost::any_cast<float>(b)) return a;
    else return b;
} else if(typeid(a) == typeid(float) && typeid(b) == typeid(int)) {
    if(boost::any_cast<float>(a) > boost::any_cast<int>(b)) return a;
    else return b;
} else if(typeid(a) == typeid(string) && typeid(b) == typeid(string)) {
    float fa = stof(boost::any_cast<string>(a).replace(boost::any_cast<string>(a).find(','), 1, "."));
    float fb = stof(boost::any_cast<string>(b).replace(boost::any_cast<string>(b).find(','), 1, "."));
    if(fa > fb) return a;
    else return b;
} else if(typeid(a) == typeid(int) && typeid(b) == typeid(string)) {
    float fa = stof(to_string(boost::any_cast<int>(a)));
    float fb = stof(boost::any_cast<string>(b).replace(boost::any_cast<string>(b).find(','), 1, "."));
    if(fa > fb) return a;
    else return b;
} else if(typeid(a) == typeid(string) && typeid(b) == typeid(int)) {
    float fa = stof(boost::any_cast<string>(a).replace(boost::any_cast<string>(a).find(','), 1, "."));
    float fb = stof(to_string(boost::any_cast<int>(b)));
    if(fa > fb) return a;
    else return b;
}
}