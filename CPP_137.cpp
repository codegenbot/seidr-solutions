if(a == b) return "None";

if(a.type() == typeid(int) && b.type() == typeid(int)) {
    if(boost::any_cast<int>(a) > boost::any_cast<int>(b)) return a;
    else return b;
}
else if(a.type() == typeid(float) && b.type() == typeid(float)) {
    if(boost::any_cast<float>(a) > boost::any_cast<float>(b)) return a;
    else return b;
}
else if(a.type() == typeid(string) && b.type() == typeid(string)) {
    float num1 = stof(boost::any_cast<string>(a).replace(boost::any_cast<string>(a).find(','), 1, "."));
    float num2 = stof(boost::any_cast<string>(b).replace(boost::any_cast<string>(b).find(','), 1, "."));
    if(num1 > num2) return a;
    else return b;
}
else if((a.type() == typeid(int) && b.type() == typeid(float)) || (a.type() == typeid(float) && b.type() == typeid(int))) {
    if(boost::any_cast<float>(a) > boost::any_cast<float>(b)) return a;
    else return b;
}
else if((a.type() == typeid(int) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(int))) {
    float num1 = a.type() == typeid(int) ? boost::any_cast<int>(a) : stof(boost::any_cast<string>(a).replace(boost::any_cast<string>(a).find(','), 1, "."));
    float num2 = b.type() == typeid(int) ? boost::any_cast<int>(b) : stof(boost::any_cast<string>(b).replace(boost::any_cast<string>(b).find(','), 1, "."));
    if(num1 > num2) return a;
    else return b;
}
else if((a.type() == typeid(float) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(float))) {
    float num1 = a.type() == typeid(float) ? boost::any_cast<float>(a) : stof(boost::any_cast<string>(a).replace(boost::any_cast<string>(a).find(','), 1, "."));
    float num2 = b.type() == typeid(float) ? boost::any_cast<float>(b) : stof(boost::any_cast<string>(b).replace(boost::any_cast<string>(b).find(','), 1, "."));
    if(num1 > num2) return a;
    else return b;
}