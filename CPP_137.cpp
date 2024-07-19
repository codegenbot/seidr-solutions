if (a.type() == typeid(int) && b.type() == typeid(int)) {
    int int_a = boost::any_cast<int>(a);
    int int_b = boost::any_cast<int>(b);
    if (int_a > int_b) return int_a;
    if (int_b > int_a) return int_b;
} else if (a.type() == typeid(float) && b.type() == typeid(float)) {
    float float_a = boost::any_cast<float>(a);
    float float_b = boost::any_cast<float>(b);
    if (float_a > float_b) return float_a;
    if (float_b > float_a) return float_b;
} else if (a.type() == typeid(string) && b.type() == typeid(string)) {
    string str_a = boost::any_cast<string>(a);
    string str_b = boost::any_cast<string>(b);
    if (str_a > str_b) return str_a;
    if (str_b > str_a) return str_b;
} else if ((a.type() == typeid(int) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(int))) {
    string str_a = boost::any_cast<string>(a);
    string str_b = boost::any_cast<string>(b);
    if (str_a == to_string(boost::any_cast<int>(b))) return "None";
    if (str_b == to_string(boost::any_cast<int>(a))) return "None";
    if (str_a > str_b) return str_a;
    if (str_b > str_a) return str_b;
}
return boost::any("None");
}