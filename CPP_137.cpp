if (a.type() == typeid(int) && b.type() == typeid(float))
    return max(boost::any_cast<int>(a), boost::any_cast<float>(b));
if (a.type() == typeid(float) && b.type() == typeid(int))
    return max(boost::any_cast<float>(a), boost::any_cast<int>(b));
if (a.type() == typeid(string) && b.type() == typeid(string))
    return (boost::any_cast<string>(a) > boost::any_cast<string>(b)) ? a : b;
return "None";
}