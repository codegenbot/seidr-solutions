if(a.type() == typeid(int) && b.type() == typeid(int)){
    if(boost::any_cast<int>(a) > boost::any_cast<int>(b)){
        return a;
    } else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)){
        return b;
    } else {
        return "None";
    }
} else if (a.type() == typeid(float) && b.type() == typeid(float)){
    if(boost::any_cast<float>(a) > boost::any_cast<float>(b)){
        return a;
    } else if (boost::any_cast<float>(a) < boost::any_cast<float>(b)){
        return b;
    } else {
        return "None";
    }
} else {
    string sa = boost::any_cast<string>(a);
    string sb = boost::any_cast<string>(b);
    
    if(stod(sa) > stod(sb)){
        return a;
    } else if (stod(sa) < stod(sb)){
        return b;
    } else {
        return "None";
    }
}