if(a.type() == typeid(int)){
        if(boost::any_cast<int>(a) > boost::any_cast<float>(b) || boost::any_cast<int>(a) > std::stof(boost::any_cast<string>(b)))
            return a;
    }
    else if(a.type() == typeid(float)){
        if(boost::any_cast<float>(a) > boost::any_cast<int>(b) || boost::any_cast<float>(a) > std::stof(boost::any_cast<string>(b)))
            return a;
    }
    else if(a.type() == typeid(string)){
        if(std::stof(boost::any_cast<string>(a)) > boost::any_cast<int>(b) || std::stof(boost::any_cast<string>(a)) > boost::any_cast<float>(b))
            return a;
    }
    return b;
}