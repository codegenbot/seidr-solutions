if (a.type() == typeid(int) && b.type() == typeid(float))
    return max(boost::any_cast<int>(a), boost::any_cast<float>(b));
if (a.type() == typeid(int) && b.type() == typeid(string))
    return boost::any_cast<int>(a) > stof(boost::any_cast<string>(b)) ? a : b;
if (a.type() == typeid(string) && b.type() == typeid(float))
    return stof(boost::any_cast<string>(a)) > boost::any_cast<float>(b) ? a : b;
if (a.type() == typeid(int) && b.type() == typeid(int))
    return boost::any_cast<int>(a) == boost::any_cast<int>(b) ? "None" : max(boost::any_cast<int>(a), boost::any_cast<int>(b));
if (a.type() == typeid(string) && b.type() == typeid(string))
    return boost::any_cast<string>(a) == boost::any_cast<string>(b) ? "None" : boost::any_cast<string>(a) > boost::any_cast<string>(b) ? a : b;
return "None";