if(a.type() == typeid(int) && b.type() == typeid(float))
    return max(boost::any_cast<int>(a), boost::any_cast<float>(b));
else if((a.type() == typeid(int) || a.type() == typeid(string)) && (b.type() == typeid(int) || b.type() == typeid(string)))
    return (boost::any_cast<string>(a) > boost::any_cast<string>(b)) ? a : b;
else
    return "None";
}