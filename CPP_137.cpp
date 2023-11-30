boost::any compare_one(boost::any a, boost::any b){
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        int num1 = boost::any_cast<int>(a);
        int num2 = boost::any_cast<int>(b);
        if(num1 > num2)
            return num1;
        else if(num2 > num1)
            return num2;
    }
    
    if(a.type() == typeid(float) && b.type() == typeid(float)){
        float num1 = boost::any_cast<float>(a);
        float num2 = boost::any_cast<float>(b);
        if(num1 > num2)
            return num1;
        else if(num2 > num1)
            return num2;
    }
    
    if(a.type() == typeid(string) && b.type() == typeid(string)){
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        replace(str1.begin(), str1.end(), ',', '.');
        replace(str2.begin(), str2.end(), ',', '.');
        if(stof(str1) > stof(str2))
            return str1;
        else if(stof(str2) > stof(str1))
            return str2;
    }
    
    return "None";
}