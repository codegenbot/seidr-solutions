if (a.type() == typeid(int) && b.type() == typeid(int)) {
    int x = boost::any_cast<int>(a);
    int y = boost::any_cast<int>(b);
    if (x > y)
        return a;
    else if (y > x)
        return b;
    else
        return "None";
} else if (a.type() == typeid(float) && b.type() == typeid(float)) {
    float x = boost::any_cast<float>(a);
    float y = boost::any_cast<float>(b);
    if (x > y)
        return a;
    else if (y > x)
        return b;
    else
        return "None";
} else if ((a.type() == typeid(string) && b.type() != typeid(int)) ||
           (b.type() == typeid(string) && a.type() != typeid(int))) {
    string str1 = boost::any_cast<string>(a);
    string str2 = boost::any_cast<string>(b);
    if (stod(str1) > stod(str2))
        return a;
    else if (stod(str2) > stod(str1))
        return b;
    else
        return "None";
} else {
    return "None";
}