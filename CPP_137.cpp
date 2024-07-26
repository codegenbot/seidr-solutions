if (a.type() == typeid(int) && b.type() == typeid(int)) {
    if (boost::any_cast<int>(a) > boost::any_cast<int>(b))
        return a;
    else if (boost::any_cast<int>(a) < boost::any_cast<int>(b))
        return b;
    else
        return "None";
} else if (a.type() == typeid(float) && b.type() == typeid(float)) {
    if (boost::any_cast<float>(a) > boost::any_cast<float>(b))
        return a;
    else if (boost::any_cast<float>(a) < boost::any_cast<float>(b))
        return b;
    else
        return "None";
} else {
    string str_a = boost::any_cast<string>(a);
    string str_b = boost::any_cast<string>(b);
    
    replace(str_a.begin(), str_a.end(), ',', '.');
    replace(str_b.begin(), str_b.end(), ',', '.');
    
    if (stof(str_a) > stof(str_b))
        return a;
    else if (stof(str_a) < stof(str_b))
        return b;
    else
        return "None";
}