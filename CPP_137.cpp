if (a.type() == typeid(int) && b.type() == typeid(int)) {
    int int_a = boost::any_cast<int>(a);
    int int_b = boost::any_cast<int>(b);
    if (int_a > int_b) return a;
    if (int_b > int_a) return b;
}
if (a.type() == typeid(float) && b.type() == typeid(float)) {
    float float_a = boost::any_cast<float>(a);
    float float_b = boost::any_cast<float>(b);
    if (float_a > float_b) return a;
    if (float_b > float_a) return b;
}
if (a.type() == typeid(string) && b.type() == typeid(string)) {
    string str_a = boost::any_cast<string>(a);
    string str_b = boost::any_cast<string>(b);
    if (str_a > str_b) return a;
    if (str_b > str_a) return b;
}
return "None";
}