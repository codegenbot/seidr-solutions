if(typeid(a) == typeid(int) && typeid(b) == typeid(int)){
    int int_a = boost::any_cast<int>(a);
    int int_b = boost::any_cast<int>(b);
    if(int_a > int_b) return a;
    if(int_b > int_a) return b;
} 
if(typeid(a) == typeid(float) && typeid(b) == typeid(float)){
    float float_a = boost::any_cast<float>(a);
    float float_b = boost::any_cast<float>(b);
    if(float_a > float_b) return a;
    if(float_b > float_a) return b;  
}
if(typeid(a) == typeid(string) && typeid(b) == typeid(string)){
    string str_a = boost::any_cast<string>(a);
    string str_b = boost::any_cast<string>(b);
    if(str_a.find(',') != string::npos) replace(str_a.begin(),str_a.end(),',','.');
    if(str_b.find(',') != string::npos) replace(str_b.begin(),str_b.end(),',','.');
    if(stod(str_a) > stod(str_b)) return a;
    if(stod(str_b) > stod(str_a)) return b;  
}
return "None";
}