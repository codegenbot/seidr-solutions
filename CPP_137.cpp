if (a.type() == typeid(int) && b.type() == typeid(int)) {
    return boost::any((int)a.convert_to<int>() > (int)b.convert_to<int>() ? a : b);
} else if ((a.type() == typeid(float) || a.type() == typeid(double)) &&
           (b.type() == typeid(float) || b.type() == typeid(double))) {
    return boost::any((float)a.convert_to<float>() > (float)b.convert_to<float>() ? a : b);
} else if (a.type() == typeid(string) && b.type() == typeid(string)) {
    string s1 = any_cast<string>(a);
    string s2 = any_cast<string>(b);
    return boost::any((stof(s1) > stof(s2)) ? a : b);
} else {
    return boost::any("None");
}