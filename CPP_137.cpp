if(a.type() == typeid(int) && b.type() == typeid(float)){
        return max(boost::any_cast<int>(a), boost::any_cast<float>(b));
    }
    if((a.type() == typeid(int) || a.type() == typeid(float)) && b.type() == typeid(string)){
        return boost::any_cast<string>(b);
    }
    if(a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(float))){
        return boost::any_cast<string>(a);
    }
    if(a.type() == typeid(int) && b.type() == typeid(int) && boost::any_cast<int>(a) == boost::any_cast<int>(b)){
        return "None";
    }
    if(a.type() == typeid(float) && b.type() == typeid(float) && boost::any_cast<float>(a) == boost::any_cast<float>(b)){
        return "None";
    }
    if(a.type() == typeid(string) && b.type() == typeid(string) && boost::any_cast<string>(a) == boost::any_cast<string>(b)){
        return "None";
    }
    return "None";
}