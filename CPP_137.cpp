if(a.type() == typeid(int) && b.type() == typeid(int)){
    int x = boost::any_cast<int>(a);
    int y = boost::any_cast<int>(b);
    if(x > y) return x;
    else if(x < y) return y;
    else return "None";
}
else if(a.type() == typeid(float) && b.type() == typeid(float)){
    float x = boost::any_cast<float>(a);
    float y = boost::any_cast<float>(b);
    if(x > y) return x;
    else if(x < y) return y;
    else return "None";
}
else if(a.type() == typeid(string) && b.type() == typeid(string)){
    string x = boost::any_cast<string>(a);
    string y = boost::any_cast<string>(b);
    if(stof(x) > stof(y)) return x;
    else if(stof(x) < stof(y)) return y;
    else return "None";
}
else if((a.type() == typeid(int) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(int))){
    if(a == b) return "None";
    else if(a.type() == typeid(int)) return boost::any_cast<int>(a);
    else return boost::any_cast<string>(b);
}
}