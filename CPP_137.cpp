if(a == b) return "None";
if(a.type() == typeid(string) || b.type() == typeid(string)){
    string sa = boost::any_cast<string>(a);
    string sb = boost::any_cast<string>(b);
    if(stod(sa) == stod(sb)) return "None";
    return stod(sa) > stod(sb) ? a : b;
}
return boost::any_cast<double>(a) > boost::any_cast<double>(b) ? a : b;