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
else if(a.type() == typeid(std::string) && b.type() == typeid(std::string)){
    std::string str_a = boost::any_cast<std::string>(a);
    std::string str_b = boost::any_cast<std::string>(b);
    
    std::replace(str_a.begin(), str_a.end(), ',', '.');
    std::replace(str_b.begin(), str_b.end(), ',', '.');
    
    float num_a = std::stof(str_a);
    float num_b = std::stof(str_b);
    
    if(num_a > num_b) return a;
    else if(num_a < num_b) return b;
    else return "None";
}
else if((a.type() == typeid(int) && b.type() == typeid(std::string)) ||
        (a.type() == typeid(std::string) && b.type() == typeid(int))){
    float num_a, num_b;
    
    if(a.type() == typeid(int)){
        num_a = boost::any_cast<int>(a);
        num_b = std::stof(boost::any_cast<std::string>(b));
    }
    else{
        num_a = std::stof(boost::any_cast<std::string>(a));
        num_b = boost::any_cast<int>(b);
    }
    
    if(num_a > num_b) return a;
    else if(num_a < num_b) return b;
    else return "None";
}
return "None";
}