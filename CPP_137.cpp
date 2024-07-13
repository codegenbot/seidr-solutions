if (a.type() == typeid(int) && b.type() == typeid(int)) {
    int ai = boost::any_cast<int>(a);
    int bi = boost::any_cast<int>(b);
    if (ai > bi)
        return a;
    else if (ai < bi)
        return b;
    else
        return boost::any("None");
} else if (a.type() == typeid(float) && b.type() == typeid(float)) {
    float af = boost::any_cast<float>(a);
    float bf = boost::any_cast<float>(b);
    if (af > bf)
        return a;
    else if (af < bf)
        return b;
    else
        return boost::any("None");
} else if ((a.type() == typeid(string) && b.type() == typeid(int)) ||
           (a.type() == typeid(int) && b.type() == typeid(string))) {
    string s = boost::any_cast<string>(a);
    int i = boost::any_cast<int>(b);
    return (stoi(s) > i) ? a : ((stoi(s) < i) ? b : boost::any("None"));
} else if ((a.type() == typeid(float) && b.type() == typeid(string)) ||
           (a.type() == typeid(string) && b.type() == typeid(float))) {
    string s = boost::any_cast<string>(a);
    float f = boost::any_cast<float>(b);
    return (stof(s) > f) ? a : ((stof(s) < f) ? b : boost::any("None"));
} else if (a.type() == typeid(string) && b.type() == typeid(string)) {
    string s1 = boost::any_cast<string>(a);
    string s2 = boost::any_cast<string>(b);
    return (stof(s1) > stof(s2)) ? a : ((stof(s1) < stof(s2)) ? b : boost::any("None"));
}
return a;