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
else if(a.type() == typeid(string) && b.type() == typeid(string)){
    string str_a = boost::any_cast<string>(a);
    string str_b = boost::any_cast<string>(b);
    if(str_a.find('.') != string::npos || str_a.find(',') != string::npos)
        return b;
    else if(str_b.find('.') != string::npos || str_b.find(',') != string::npos)
        return a;
    else if(stof(str_a) > stof(str_b))
        return a;
    else if(stof(str_a) < stof(str_b))
        return b;
}
return "None";
}