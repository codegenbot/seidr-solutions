if (a.type() == typeid(int) && b.type() == typeid(int)) {
    int ai = boost::any_cast<int>(a);
    int bi = boost::any_cast<int>(b);
    if (ai > bi)
        return a;
    else if (ai < bi)
        return b;
    else
        return "None";
} else if (a.type() == typeid(float) && b.type() == typeid(float)) {
    float af = boost::any_cast<float>(a);
    float bf = boost::any_cast<float>(b);
    if (af > bf)
        return a;
    else if (af < bf)
        return b;
    else
        return "None";
} else if (a.type() == typeid(string) && b.type() == typeid(string)) {
    string as = boost::any_cast<string>(a);
    string bs = boost::any_cast<string>(b);
    if (as > bs)
        return a;
    else if (as < bs)
        return b;
    else
        return "None";
} else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(float))) {
    string as = boost::any_cast<string>(a);
    int bi = boost::any_cast<int>(b);
    float bf = boost::any_cast<float>(b);
    if (stof(as) > bi)
        return a;
    else if (stof(as) < bi)
        return b;
    else if (stof(as) > bf)
        return a;
    else if (stof(as) < bf)
        return b;
    else
        return "None";
} else if ((a.type() == typeid(int) || a.type() == typeid(float)) && b.type() == typeid(string)) {
    int ai = boost::any_cast<int>(a);
    float af = boost::any_cast<float>(a);
    string bs = boost::any_cast<string>(b);
    if (ai > stof(bs))
        return a;
    else if (ai < stof(bs))
        return b;
    else if (af > stof(bs))
        return a;
    else if (af < stof(bs))
        return b;
    else
        return "None";
} else {
    return "Invalid input";
}