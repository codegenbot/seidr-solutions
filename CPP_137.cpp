if(a.type() == typeid(int) && b.type() == typeid(int)){
    int int_a = boost::any_cast<int>(a);
    int int_b = boost::any_cast<int>(b);
    if(int_a > int_b) return int_a;
    if(int_a < int_b) return int_b;
}
if(a.type() == typeid(float) && b.type() == typeid(float)){
    float float_a = boost::any_cast<float>(a);
    float float_b = boost::any_cast<float>(b);
    if(float_a > float_b) return float_a;
    if(float_a < float_b) return float_b;
}
if(a.type() == typeid(string) && b.type() == typeid(string)){
    string str_a = boost::any_cast<string>(a);
    string str_b = boost::any_cast<string>(b);
    if(str_a > str_b) return str_a;
    if(str_a < str_b) return str_b;
}
return "None";
}