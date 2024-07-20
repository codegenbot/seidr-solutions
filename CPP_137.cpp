if(a.type() == typeid(int) && b.type() == typeid(int)){
    if(boost::any_cast<int>(a) > boost::any_cast<int>(b)) return a;
    else if(boost::any_cast<int>(a) < boost::any_cast<int>(b)) return b;
}
if(a.type() == typeid(float) && b.type() == typeid(float)){
    if(boost::any_cast<float>(a) > boost::any_cast<float>(b)) return a;
    else if(boost::any_cast<float>(a) < boost::any_cast<float>(b)) return b;
}
if(a.type() == typeid(string) && b.type() == typeid(string)){
    if(stod(boost::any_cast<string>(a), NULL) > stod(boost::any_cast<string>(b), NULL)) return a;
    else if(stod(boost::any_cast<string>(a), NULL) < stod(boost::any_cast<string>(b), NULL)) return b;
}
return "None";
}