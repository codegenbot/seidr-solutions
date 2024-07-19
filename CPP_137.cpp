if(a.type() == typeid(string) && b.type() == typeid(string)){
    string sa = boost::any_cast<string>(a);
    string sb = boost::any_cast<string>(b);
    if(sa == sb) return "None";
    return sa.length() > sb.length() ? sa : sb;
}
if(a.type() == typeid(float) || b.type() == typeid(float)){
    float fa = a.type() == typeid(float) ? boost::any_cast<float>(a) : stof(boost::any_cast<string>(a));
    float fb = b.type() == typeid(float) ? boost::any_cast<float>(b) : stof(boost::any_cast<string>(b));
    if(fa == fb) return "None";
    return fa > fb ? fa : fb;
}
if(a.type() == typeid(int) && b.type() == typeid(int)){
    int ia = boost::any_cast<int>(a);
    int ib = boost::any_cast<int>(b);
    if(ia == ib) return "None";
    return ia > ib ? ia : ib;
}
return "None";
}