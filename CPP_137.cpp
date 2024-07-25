if (a.type() == typeid(int) && b.type() == typeid(int)) {
    int x = boost::any_cast<int>(a);
    int y = boost::any_cast<int>(b);
    if (x > y)
        return a;
    else if (y > x)
        return b;
    else
        return boost::any("None");
} else if (a.type() == typeid(float) && b.type() == typeid(float)) {
    float x = boost::any_cast<float>(a);
    float y = boost::any_cast<float>(b);
    if (x > y)
        return a;
    else if (y > x)
        return b;
    else
        return boost::any("None");
} else if ((a.type() == typeid(string) && b.type() != typeid(int)) ||
           (a.type() != typeid(string) && b.type() == typeid(string))) {
    return boost::any("None");
} else {
    string x = boost::any_cast<string>(a);
    string y = boost::any_cast<string>(b);
    if (stof(y) > stof(x))
        return a;
    else if (stof(x) > stof(y))
        return b;
    else
        return boost::any("None");
}