if (a.type() == typeid(int) && b.type() == typeid(int)) {
    if (get<int>(a) > get<int>(b))
        return a;
    else if (get<int>(a) < get<int>(b))
        return b;
    else
        return boost::any("None");
} else if (a.type() == typeid(float) && b.type() == typeid(float)) {
    if (get<float>(a) > get<float>(b))
        return a;
    else if (get<float>(a) < get<float>(b))
        return b;
    else
        return boost::any("None");
} else if ((a.type() == typeid(string) && b.type() == typeid(int)) || 
           (a.type() == typeid(int) && b.type() == typeid(string))) {
    if (get<string>(a).compare(get<string>(b) + "") > 0)
        return a;
    else if (get<string>(a).compare(get<string>(b) + "") < 0)
        return b;
    else
        return boost::any("None");
} else if ((a.type() == typeid(float) && b.type() == typeid(string)) || 
           (a.type() == typeid(string) && b.type() == typeid(float))) {
    string str = get<string>(b);
    float f = stof(str);
    if (get<float>(a) > f)
        return a;
    else if (get<float>(a) < f)
        return b;
    else
        return boost::any("None");
} else {
    return boost::any("None");
}