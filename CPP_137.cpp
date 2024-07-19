if(typeid(int) == a.type() && typeid(int) == b.type()){
    int int_a = boost::any_cast<int>(a);
    int int_b = boost::any_cast<int>(b);
    if(int_a > int_b){
        return int_a;
    } else if(int_a < int_b){
        return int_b;
    } else {
        return "None";
    }
} else if(typeid(float) == a.type() && typeid(float) == b.type()){
    float float_a = boost::any_cast<float>(a);
    float float_b = boost::any_cast<float>(b);
    if(float_a > float_b){
        return float_a;
    } else if(float_a < float_b){
        return float_b;
    } else {
        return "None";
    }
} else if(typeid(string) == a.type() && typeid(string) == b.type()){
    string str_a = boost::any_cast<string>(a);
    string str_b = boost::any_cast<string>(b);
    if(stof(str_a) > stof(str_b)){
        return str_a;
    } else if(stof(str_a) < stof(str_b)){
        return str_b;
    } else {
        return "None";
    }
}