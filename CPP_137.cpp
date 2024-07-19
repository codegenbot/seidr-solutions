if (a.type() == typeid(int) && b.type() == typeid(int)){
        return boost::any_cast<int>(a) > boost::any_cast<int>(b) ? a : "None";
    }
    if (a.type() == typeid(float) && b.type() == typeid(float)){
        return boost::any_cast<float>(a) > boost::any_cast<float>(b) ? a : "None";
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)){
        return stof(boost::any_cast<string>(a)) > stof(boost::any_cast<string>(b)) ? a : "None";
    }
    return "None";
}