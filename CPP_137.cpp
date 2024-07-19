if(a.type() == typeid(int) && b.type() == typeid(int)){
    int num1 = boost::any_cast<int>(a);
    int num2 = boost::any_cast<int>(b);
    if(num1 > num2) return num1;
    if(num2 > num1) return num2;
}
if(a.type() == typeid(float) && b.type() == typeid(float)){
    float num1 = boost::any_cast<float>(a);
    float num2 = boost::any_cast<float>(b);
    if(num1 > num2) return num1;
    if(num2 > num1) return num2;
}
if(a.type() == typeid(string) && b.type() == typeid(string)){
    string str1 = boost::any_cast<string>(a);
    string str2 = boost::any_cast<string>(b);
    float num1 = stof(str1.replace(str1.find(','), 1, "."));
    float num2 = stof(str2.replace(str2.find(','), 1, "."));
    if(num1 > num2) return str1;
    if(num2 > num1) return str2;
}
return "None";
}