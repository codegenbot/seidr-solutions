if(a == b)
    return "None";
if(a.type() == typeid(int) && b.type() == typeid(int))
    return max(boost::any_cast<int>(a), boost::any_cast<int>(b));
if(a.type() == typeid(float) && b.type() == typeid(float))
    return max(boost::any_cast<float>(a), boost::any_cast<float>(b));
if(a.type() == typeid(string) && b.type() == typeid(string))
    return max(stof(boost::any_cast<string>(a)), stof(boost::any_cast<string>(b)));
return b;
}