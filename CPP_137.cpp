if (a.type() == typeid(int) && b.type() == typeid(int)) {
    return boost::any(((int)a) > ((int)b) ? a : b);
} else if (a.type() == typeid(float) && b.type() == typeid(float)) {
    return boost::any(((float)a) > ((float)b) ? a : b);
} else if (a.type() == typeid(double) && b.type() == typeid(double)) {
    return boost::any(((double)a) > ((double)b) ? a : b);
} else if (a.type() == typeid(string) && b.type() == typeid(string)) {
    string s1 = any_cast<string>(a), s2 = any_cast<string>(b);
    size_t p1 = s1.find('.');
    size_t p2 = s2.find('.');
    if (p1 != string::npos) {
        s1 = s1.substr(0, p1);
    }
    if (p2 != string::npos) {
        s2 = s2.substr(0, p2);
    }
    return boost::any(s1 > s2 ? a : b);
} else if (a.type() == typeid(string)) {
    return b;
} else if (b.type() == typeid(string)) {
    return a;
} else {
    if (any_cast<double>(a) > any_cast<double>(b))
        return a;
    else
        return b;
}