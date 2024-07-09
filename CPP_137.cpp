if(a.type() == typeid(int) || a.type() == typeid(float)){
        if(boost::any_cast<float>(a) > boost::any_cast<float>(b)){
            return a;
        }
        else if(boost::any_cast<float>(a) < boost::any_cast<float>(b)){
            return b;
        }
        else{
            return "None";
        }
    }
    else if(a.type() == typeid(string) || b.type() == typeid(string)){
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);
        if(stof(sa) > stof(sb)){
            return a;
        }
        else if(stof(sa) < stof(sb)){
            return b;
        }
        else{
            return "None";
        }
    }
}