if(a.type() == typeid(int) && b.type() == typeid(int)){
    int x = boost::any_cast<int>(a);
    int y = boost::any_cast<int>(b);
    if(x > y) return x;
    if(y > x) return y;
}
if(a.type() == typeid(float) && b.type() == typeid(float)){
    float x = boost::any_cast<float>(a);
    float y = boost::any_cast<float>(b);
    if(x > y) return x;
    if(y > x) return y;
}
if(a.type() == typeid(string) && b.type() == typeid(string)){
    string x = boost::any_cast<string>(a);
    string y = boost::any_cast<string>(b);
    if(x > y) return x;
    if(y > x) return y;
}
return "None";
}