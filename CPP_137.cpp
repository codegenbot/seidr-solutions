if(typeid(a) == typeid(int) && typeid(b) == typeid(int)){
    return boost::any_cast<int>(a) > boost::any_cast<int>(b) ? a : b;
}
if(typeid(a) == typeid(float) && typeid(b) == typeid(float)){
    return boost::any_cast<float>(a) > boost::any_cast<float>(b) ? a : b;
}
if(typeid(a) == typeid(string) && typeid(b) == typeid(string)){
    float a_float = stof(boost::any_cast<string>(a).replace(boost::any_cast<string>(a).find(","), 1, "."));
    float b_float = stof(boost::any_cast<string>(b).replace(boost::any_cast<string>(b).find(","), 1, "."));
    return a_float > b_float ? a : b;
}
return "None";
}