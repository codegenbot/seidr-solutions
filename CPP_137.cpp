if(a.type() == typeid(int) && b.type() == typeid(int)){
    int int_a = boost::any_cast<int>(a);
    int int_b = boost::any_cast<int>(b);
    if(int_a > int_b) return int_a;
    else if(int_b > int_a) return int_b;
    else return "None";
}
else if(a.type() == typeid(float) && b.type() == typeid(float)){
    float float_a = boost::any_cast<float>(a);
    float float_b = boost::any_cast<float>(b);
    if(float_a > float_b) return float_a;
    else if(float_b > float_a) return float_b;
    else return "None";
}
else if(a.type() == typeid(string) && b.type() == typeid(string)){
    string str_a = boost::any_cast<string>(a);
    string str_b = boost::any_cast<string>(b);
    float float_a = stof(str_a);
    float float_b = stof(str_b);
    if(float_a > float_b) return str_a;
    else if(float_b > float_a) return str_b;
    else return "None";
}
else if((a.type() == typeid(int) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(int))){
    string str_a = boost::any_cast<string>(a);
    string str_b = boost::any_cast<string>(b);
    float float_a = stof(str_a);
    int int_b = boost::any_cast<int>(b);
    if(float_a > int_b) return str_a;
    else if(int_b > float_a) return int_b;
    else return "None";
}
return "None";
}