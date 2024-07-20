if(a.type() == typeid(int) && b.type() == typeid(int)){
    if(boost::any_cast<int>(a) > boost::any_cast<int>(b))
        return a;
    else if(boost::any_cast<int>(a) < boost::any_cast<int>(b))
        return b;
}
else if(a.type() == typeid(float) && b.type() == typeid(float)){
    if(boost::any_cast<float>(a) > boost::any_cast<float>(b))
        return a;
    else if(boost::any_cast<float>(a) < boost::any_cast<float>(b))
        return b;
}
else if(a.type() == typeid(std::string) && b.type() == typeid(std::string)){
    if(a.type().name() == b.type().name()){
        if(a == b)
            return "None";
        else if(std::stof(boost::any_cast<std::string>(a)) > std::stof(boost::any_cast<std::string>(b)))
            return a;
        else
            return b;
    }
}
else if(a.type() == typeid(int) && b.type() == typeid(std::string)){
    if(std::to_string(boost::any_cast<int>(a)) == boost::any_cast<std::string>(b))
        return "None";
    else if(std::to_string(boost::any_cast<int>(a)) > boost::any_cast<std::string>(b))
        return a;
    else
        return b;
}
else if(a.type() == typeid(std::string) && b.type() == typeid(int)){
    if(boost::any_cast<std::string>(a) == std::to_string(boost::any_cast<int>(b)))
        return "None";
    else if(boost::any_cast<std::string>(a) > std::to_string(boost::any_cast<int>(b)))
        return a;
    else
        return b;
}
}