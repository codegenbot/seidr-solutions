if(typeid(a) == typeid(int) && typeid(b) == typeid(float))
        return max(boost::any_cast<int>(a), boost::any_cast<float>(b));
    
    if(typeid(a) == typeid(float) && typeid(b) == typeid(int))
        return max(boost::any_cast<float>(a), boost::any_cast<int>(b));
    
    if(typeid(a) == typeid(int) && typeid(b) == typeid(int))
        return boost::any_cast<int>(a) == boost::any_cast<int>(b) ? "None" : max(boost::any_cast<int>(a), boost::any_cast<int>(b));
    
    if(typeid(a) == typeid(float) && typeid(b) == typeid(float))
        return boost::any_cast<float>(a) == boost::any_cast<float>(b) ? "None" : max(boost::any_cast<float>(a), boost::any_cast<float>(b));
    
    if(typeid(a) == typeid(string) && typeid(b) == typeid(string))
        return boost::any_cast<string>(a) == boost::any_cast<string>(b) ? "None" : max(stof(boost::any_cast<string>(a).replace(',','.')), stof(boost::any_cast<string>(b).replace(',','.')));
    
    return "None";
}