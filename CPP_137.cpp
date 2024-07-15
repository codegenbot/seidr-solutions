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
    double num1 = stod(boost::any_cast<string>(a).replace(boost::any_cast<string>(a).find(','), 1, "."));
    double num2 = stod(boost::any_cast<string>(b).replace(boost::any_cast<string>(b).find(','), 1, "."));
    if(num1 > num2)
        return a;
    else if(num1 < num2)
        return b;
}
return "None";
}