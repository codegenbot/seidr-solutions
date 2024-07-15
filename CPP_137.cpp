if(a.type() == typeid(int) && b.type() == typeid(int)){
    if(boost::any_cast<int>(a) > boost::any_cast<int>(b))
        return a;
    else if(boost::any_cast<int>(a) < boost::any_cast<int>(b))
        return b;
}
if(a.type() == typeid(float) && b.type() == typeid(float)){
    if(boost::any_cast<float>(a) > boost::any_cast<float>(b))
        return a;
    else if(boost::any_cast<float>(a) < boost::any_cast<float>(b))
        return b;
}
if(a.type() == typeid(std::string) && b.type() == typeid(std::string)){
    if(a == b)
        return "None";
    if(std::stoi(boost::any_cast<std::string>(a)) > std::stoi(boost::any_cast<std::string>(b)))
        return a;
    else
        return b;
}
if((a.type() == typeid(int) && b.type() == typeid(float)) 
|| (a.type() == typeid(float) && b.type() == typeid(int))){
    if(boost::any_cast<float>(a) > boost::any_cast<float>(b))
        return a;
    else if(boost::any_cast<float>(a) < boost::any_cast<float>(b))
        return b;
}
if((a.type() == typeid(int) && b.type() == typeid(std::string)) 
|| (a.type() == typeid(std::string) && b.type() == typeid(int))){
    if(std::stoi(boost::any_cast<std::string>(a)) > std::stoi(boost::any_cast<std::string>(b)))
        return a;
    else if(std::stoi(boost::any_cast<std::string>(a)) < std::stoi(boost::any_cast<std::string>(b)))
        return b;
}
if((a.type() == typeid(float) && b.type() == typeid(std::string)) 
|| (a.type() == typeid(std::string) && b.type() == typeid(float))){
    if(std::stof(boost::any_cast<std::string>(a)) > std::stof(boost::any_cast<std::string>(b)))
        return a;
    else if(std::stof(boost::any_cast<std::string>(a)) < std::stof(boost::any_cast<std::string>(b)))
        return b;
}
}