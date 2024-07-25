if(a.type() == typeid(int) && b.type() == typeid(int)){
    int val1 = boost::any_cast<int>(a);
    int val2 = boost::any_cast<int>(b);
    if(val1 > val2)
        return val1;
    else if(val2 > val1)
        return val2;
    else
        return "None";
}
else if(a.type() == typeid(float) && b.type() == typeid(float)){
    float val1 = boost::any_cast<float>(a);
    float val2 = boost::any_cast<float>(b);
    if(val1 > val2)
        return val1;
    else if(val2 > val1)
        return val2;
    else
        return "None";
}
else if(a.type() == typeid(std::string) && b.type() == typeid(std::string)){
    std::string val1 = boost::any_cast<std::string>(a);
    std::string val2 = boost::any_cast<std::string>(b);
    float f1 = std::stof(val1);
    float f2 = std::stof(val2);
    if(f1 > f2)
        return val1;
    else if(f2 > f1)
        return val2;
    else
        return "None";
}
else if(a.type() == typeid(std::string) && b.type() != typeid(std::string)){
    std::string val1 = boost::any_cast<std::string>(a);
    float f1 = std::stof(val1);
    if(f1 > boost::any_cast<float>(b))
        return val1;
    else if(boost::any_cast<float>(b) > f1)
        return b;
    else
        return "None";
}
else if(a.type() != typeid(std::string) && b.type() == typeid(std::string)){
    std::string val2 = boost::any_cast<std::string>(b);
    float f2 = std::stof(val2);
    if(boost::any_cast<float>(a) > f2)
        return a;
    else if(f2 > boost::any_cast<float>(a))
        return val2;
    else
        return "None";
}
}