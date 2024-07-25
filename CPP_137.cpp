if(a.type() == typeid(int) && b.type() == typeid(int)){
    if(boost::any_cast<int>(a) > boost::any_cast<int>(b)) return a;
    else if(boost::any_cast<int>(a) < boost::any_cast<int>(b)) return b;
    else return "None";
}
else if(a.type() == typeid(float) && b.type() == typeid(float)){
    if(boost::any_cast<float>(a) > boost::any_cast<float>(b)) return a;
    else if(boost::any_cast<float>(a) < boost::any_cast<float>(b)) return b;
    else return "None";
}
else if(a.type() == typeid(string) && b.type() == typeid(string)){
    float float_a, float_b;
    if(a.type() == typeid(int)) float_a = boost::any_cast<int>(a);
    else float_a = stof(boost::any_cast<string>(a));
    if(b.type() == typeid(int)) float_b = boost::any_cast<int>(b);
    else float_b = stof(boost::any_cast<string>(b));
    
    if(float_a > float_b) return a;
    else if(float_a < float_b) return b;
    else return "None";
}
}