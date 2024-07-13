if (a.type() == typeid(int) && b.type() == typeid(int)) {
    return boost::any((*(int*)(&a) > *(int*)(&b)) ? &a : &b);
} else if ((a.type() == typeid(float) || a.type() == typeid(double) ||
            a.type() == typeid(long double) || a.type() == typeid(string)) &&
           (b.type() == typeid(float) || b.type() == typeid(double) ||
            b.type() == typeid(long double))) {
    if (*(float*)&a > *(float*)&b)
        return &a;
    else if (*((float*)&a) < *((float*)&b))
        return &b;
    else
        return boost::any("None");
} else if (a.type() == typeid(string) && b.type() == typeid(string)) {
    if (*((string*)&a) > *((string*)&b))
        return &a;
    else if (*((string*)&a) < *((string*)&b))
        return &b;
    else
        return boost::any("None");
} else {
    return boost::any("None");
}