if (a.type() == typeid(int) && b.type() == typeid(int)) {
    int x = boost::any_cast<int>(a);
    int y = boost::any_cast<int>(b);
    if (x > y)
        return a;
    else if (x < y)
        return b;
    else
        return boost::any("None");
} else if (a.type() == typeid(float) && b.type() == typeid(float)) {
    float x = boost::any_cast<float>(a);
    float y = boost::any_cast<float>(b);
    if (x > y)
        return a;
    else if (x < y)
        return b;
    else
        return boost::any("None");
} else if (a.type() == typeid(string) && b.type() == typeid(string)) {
    string x = boost::any_cast<string>(a);
    string y = boost::any_cast<string>(b);
    if (x > y)
        return a;
    else if (x < y)
        return b;
    else
        return boost::any("None");
} else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(float))) {
    string x = boost::any_cast<string>(a);
    float y = boost::any_cast<float>(b);
    if (stof(x) > y)
        return a;
    else if (stof(x) < y)
        return b;
    else
        return boost::any("None");
} else if ((a.type() == typeid(int) || a.type() == typeid(float)) && b.type() == typeid(string)) {
    float x = boost::any_cast<float>(a);
    string y = boost::any_cast<string>(b);
    if (x > stof(y))
        return a;
    else if (x < stof(y))
        return b;
    else
        return boost::any("None");
} else {
    return boost::any("Invalid input");
}