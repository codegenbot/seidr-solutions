if(a.type() == typeid(int) && b.type() == typeid(int)){
    int x = boost::any_cast<int>(a);
    int y = boost::any_cast<int>(b);
    if(x > y) return x;
    else if(y > x) return y;
}
if(a.type() == typeid(float) && b.type() == typeid(float)){
    float x = boost::any_cast<float>(a);
    float y = boost::any_cast<float>(b);
    if(x > y) return x;
    else if(y > x) return y;
}
if(a.type() == typeid(string) && b.type() == typeid(string)){
    string x = boost::any_cast<string>(a);
    string y = boost::any_cast<string>(b);
    replace(x.begin(), x.end(), ',', '.');
    replace(y.begin(), y.end(), ',', '.');
    if(stof(x) > stof(y)) return a;
    else if(stof(y) > stof(x)) return b;
}

return "None";
}