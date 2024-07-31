if(a.index() != b.index()){
    return a.index() > b.index() ? a : b;
}
if(a.index() == 0 && b.index() == 0){
    if(boost::any_cast<int>(a) > boost::any_cast<int>(b))
        return a;
    else if(boost::any_cast<int>(a) < boost::any_cast<int>(b))
        return b;
}
if(a.index() == 1 && b.index() == 1){
    if(boost::any_cast<float>(a) > boost::any_cast<float>(b))
        return a;
    else if(boost::any_cast<float>(a) < boost::any_cast<float>(b))
        return b;
}
if(a.index() == 2 && b.index() == 2){
    auto str1 = boost::any_cast<string>(a);
    auto str2 = boost::any_cast<string>(b);
    
    std::replace(str1.begin(), str1.end(), ',', '.');
    std::replace(str2.begin(), str2.end(), ',', '.');

    float num1 = stof(str1);
    float num2 = stof(str2);

    if(num1 > num2)
        return a;
    else if(num1 < num2)
        return b;
}
return "None";
}