if(a.type() == typeid(int) && b.type() == typeid(int)){
    int val_a = boost::any_cast<int>(a);
    int val_b = boost::any_cast<int>(b);
    if(val_a > val_b) return val_a;
    else if(val_b > val_a) return val_b;
    else return "None";
}
else if(a.type() == typeid(float) && b.type() == typeid(float)){
    float val_a = boost::any_cast<float>(a);
    float val_b = boost::any_cast<float>(b);
    if(val_a > val_b) return val_a;
    else if(val_b > val_a) return val_b;
    else return "None";
}
else if(a.type() == typeid(string) && b.type() == typeid(string)){
    string val_a = boost::any_cast<string>(a);
    string val_b = boost::any_cast<string>(b);
    if(stof(val_a) > stof(val_b)) return val_a;
    else if(stof(val_b) > stof(val_a)) return val_b;
    else return "None";
}
else if((a.type() == typeid(int) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(int))){
    if(a == b) return "None";
    else if(a.type() == typeid(int)) return boost::any_cast<int>(a);
    else return boost::any_cast<string>(b);
}
return "None";
}