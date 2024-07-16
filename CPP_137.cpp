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
    float num1, num2;
    if(((string)boost::any_cast<string>(a)).find(",") != string::npos)
        num1 = stof(((string)boost::any_cast<string>(a)).replace(((string)boost::any_cast<string>(a)).find(","), 1, "."));
    else
        num1 = stof(boost::any_cast<string>(a));
    
    if(((string)boost::any_cast<string>(b)).find(",") != string::npos)
        num2 = stof(((string)boost::any_cast<string>(b)).replace(((string)boost::any_cast<string>(b)).find(","), 1, "."));
    else
        num2 = stof(boost::any_cast<string>(b));

    if(num1 > num2)
        return a;
    else if(num1 < num2)
        return b;
    else
        return "None";
}
}