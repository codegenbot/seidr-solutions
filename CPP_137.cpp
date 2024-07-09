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
} else if ((a.type() == typeid(string) && b.type() != typeid(int)) ||
           (a.type() != typeid(string) && b.type() == typeid(string))) {
    if (boost::any_cast<string>(a) > boost::any_cast<string>(b))
        return a;
    else
        return b;
} else {
    return boost::any("None");
}