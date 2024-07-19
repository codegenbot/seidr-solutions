if (a.type() == typeid(int) && b.type() == typeid(int)) {
    int n1 = boost::any_cast<int>(a);
    int n2 = boost::any_cast<int>(b);
    if (n1 > n2) {
        return n1;
    } else if (n1 < n2) {
        return n2;
    }
} else if (a.type() == typeid(float) && b.type() == typeid(float)) {
    float f1 = boost::any_cast<float>(a);
    float f2 = boost::any_cast<float>(b);
    if (f1 > f2) {
        return f1;
    } else if (f1 < f2) {
        return f2;
    }
} else if (a.type() == typeid(string) && b.type() == typeid(string)) {
    string s1 = boost::any_cast<string>(a);
    string s2 = boost::any_cast<string>(b);
    if (s1.find(',') != string::npos) {
        replace(s1.begin(), s1.end(), ',', '.');
    }
    if (s2.find(',') != string::npos) {
        replace(s2.begin(), s2.end(), ',', '.');
    }
    if (stof(s1) > stof(s2)) {
        return s1;
    } else if (stof(s1) < stof(s2)) {
        return s2;
    }
}
return "None";