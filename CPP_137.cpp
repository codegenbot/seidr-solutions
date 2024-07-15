if(a == b){
    return "None";
}
if(a.type() == typeid(int) && b.type() == typeid(int)){
    return max(boost::any_cast<int>(a), boost::any_cast<int>(b));
}
if(a.type() == typeid(float) && b.type() == typeid(float)){
    return max(boost::any_cast<float>(a), boost::any_cast<float>(b));
}
if(a.type() == typeid(string) && b.type() == typeid(string)){
    float num_a = stof(boost::any_cast<string>(a).replace(boost::any_cast<string>(a).find(','), 1, "."));
    float num_b = stof(boost::any_cast<string>(b).replace(boost::any_cast<string>(b).find(','), 1, "."));
    return num_a > num_b ? boost::any_cast<string>(a) : boost::any_cast<string>(b);
}
if((a.type() == typeid(int) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(int))){
    float num_a = a.type() == typeid(int) ? boost::any_cast<int>(a) : stof(boost::any_cast<string>(a).replace(boost::any_cast<string>(a).find(','), 1, "."));
    float num_b = b.type() == typeid(int) ? boost::any_cast<int>(b) : stof(boost::any_cast<string>(b).replace(boost::any_cast<string>(b).find(','), 1, "."));
    return num_a > num_b ? a : b;
}
}