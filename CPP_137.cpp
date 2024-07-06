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
    if (get<string>(a).compare(to_string(get<int>(b))) > 0)
        return a;
    else if (get<string>(a).compare(to_string(get<int>(b))) < 0)
        return b;
    else
        return boost::any("None");
} else if ((a.type() == typeid(string) && b.type() == typeid(float)) || 
           (a.type() == typeid(float) && b.type() == typeid(string))) {
    string strB = to_string(get<float>(b));
    if (get<string>(a).compare(strB) > 0)
        return a;
    else if (get<string>(a).compare(strB) < 0)
        return b;
    else
        return boost::any("None");
} else {
    string strA = to_string(get<int>(a));
    string strB = to_string(get<float>(b));
    if (strA.compare(strB) > 0)
        return boost::any(a);
    else if (strA.compare(strB) < 0)
        return boost::any(b);
    else
        return boost::any("None");
}