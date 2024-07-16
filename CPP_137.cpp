if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(boost::any_cast<int>(a) > boost::any_cast<int>(b)) return a;
        if(boost::any_cast<int>(a) < boost::any_cast<int>(b)) return b;
    }
    else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(boost::any_cast<float>(a) > boost::any_cast<float>(b)) return a;
        if(boost::any_cast<float>(a) < boost::any_cast<float>(b)) return b;
    }
    else if(a.type() == typeid(string) && b.type() == typeid(string)){
        if(a.type().name() == typeid(string).name()){
            if(stof(boost::any_cast<string>(a)) > stof(boost::any_cast<string>(b))) return a;
            if(stof(boost::any_cast<string>(a)) < stof(boost::any_cast<string>(b))) return b;
        }
    }
    return "None";
}