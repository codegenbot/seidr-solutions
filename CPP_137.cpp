if(a.type() == typeid(int) && b.type() == typeid(int)){
    if(boost::any_cast<int>(a) > boost::any_cast<int>(b))
        return a;
    else if(boost::any_cast<int>(a) < boost::any_cast<int>(b))
        return b;
    else
        return "None";
}
else if(a.type() == typeid(float) && b.type() == typeid(float)){
    if(boost::any_cast<float>(a) > boost::any_cast<float>(b))
        return a;
    else if(boost::any_cast<float>(a) < boost::any_cast<float>(b))
        return b;
    else
        return "None";
}
else if(a.type() == typeid(string) && b.type() == typeid(string)){
    float a_float = stof(boost::any_cast<string>(a).replace(boost::any_cast<string>(a).find(','), 1, "."));
    float b_float = stof(boost::any_cast<string>(b).replace(boost::any_cast<string>(b).find(','), 1, "."));
    if(a_float > b_float)
        return a;
    else if(a_float < b_float)
        return b;
    else
        return "None";
}
else if((a.type() == typeid(int) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(int))){
    float a_float = stof((a.type() == typeid(int) ? to_string(boost::any_cast<int>(a)) : boost::any_cast<string>(a).replace(boost::any_cast<string>(a).find(','), 1, ".")));
    float b_float = stof((b.type() == typeid(int) ? to_string(boost::any_cast<int>(b)) : boost::any_cast<string>(b).replace(boost::any_cast<string>(b).find(','), 1, ".")));
    if(a_float > b_float)
        return a;
    else if(a_float < b_float)
        return b;
    else
        return "None";
}
return "None";
}