if (a.type() == typeid(int) && b.type() == typeid(int)) {
    int x = boost::any_cast<int>(a);
    int y = boost::any_cast<int>(b);
    if (x > y)
        return a;
    else if (y > x)
        return b;
    else
        return "None";
} else if (a.type() == typeid(double) && b.type() == typeid(double)) {
    double x = boost::any_cast<double>(a);
    double y = boost::any_cast<double>(b);
    if (x > y)
        return a;
    else if (y > x)
        return b;
    else
        return "None";
} else if ((a.type() == typeid(string) && b.type() != typeid(int)) ||
           (a.type() != typeid(string) && b.type() == typeid(string))) {
    return (boost::any_cast<string>(a) > boost::any_cast<string>(b))
           ? a : b;
} else {
    return "None";
}