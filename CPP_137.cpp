if (a.type() == typeid(int) && b.type() == typeid(int)) {
    if (get<int>(a) > get<int>(b))
        return a;
    else if (get<int>(a) < get<int>(b))
        return b;
    else
        return boost::any("None");
} else if ((a.type() == typeid(float) || a.type() == typeid(double)) &&
           (b.type() == typeid(float) || b.type() == typeid(double))) {
    if (get<float>(a) > get<float>(b))
        return a;
    else if (get<float>(a) < get<float>(b))
        return b;
    else
        return boost::any("None");
} else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
           (b.type() == typeid(string) || b.type() == typeid(wstring))) {
    string s1 = get<string>(a);
    string s2 = get<string>(b);
    size_t pos = 0;
    while ((pos = s2.find(".")) != string::npos)
        s2.replace(pos, 1, ",");
    while ((pos = s2.find(",")) != string::npos)
        s2.replace(pos, 1, ".");
    if (stod(s1) > stod(s2))
        return a;
    else if (stod(s1) < stod(s2))
        return b;
    else
        return boost::any("None");
} else {
    return boost::any("None");
}