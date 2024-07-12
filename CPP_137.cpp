if (a.type() == typeid(int) && b.type() == typeid(int)) {
    return boost::any((int)max(get<int>(a), get<int>(b)));
} else if ((a.type() == typeid(float) || a.type() == typeid(double)) &&
           (b.type() == typeid(float) || b.type() == typeid(double))) {
    return boost::any(max(get<float>(a), get<float>(b)));
} else if (a.type() == typeid(string) && b.type() == typeid(string)) {
    string str1 = boost::any_cast<string>(a);
    string str2 = boost::any_cast<string>(b);
    if (str1 > str2)
        return a;
    else
        return b;
} else if ((a.type() == typeid(int) && b.type() != typeid(string)) ||
           (a.type() != typeid(int) && b.type() == typeid(int))) {
    return boost::any("None");
} else {
    string str1 = boost::any_cast<string>(a);
    float f2 = boost::any_cast<float>(b);
    if (str1 > to_string(f2))
        return a;
    else
        return b;
}