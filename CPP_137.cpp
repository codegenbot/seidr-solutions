if (a.type() == typeid(int) && b.type() == typeid(int)) {
    int num_a = boost::any_cast<int>(a);
    int num_b = boost::any_cast<int>(b);
    if (num_a > num_b) return num_a;
    else if (num_b > num_a) return num_b;
} else if (a.type() == typeid(float) && b.type() == typeid(float)) {
    float num_a = boost::any_cast<float>(a);
    float num_b = boost::any_cast<float>(b);
    if (num_a > num_b) return num_a;
    else if (num_b > num_a) return num_b;
} else if (a.type() == typeid(string) && b.type() == typeid(string)) {
    string str_a = boost::any_cast<string>(a);
    string str_b = boost::any_cast<string>(b);
    if (str_a > str_b) return str_a;
    else if (str_b > str_a) return str_b;
} else if ((a.type() == typeid(int) && b.type() == typeid(string)) ||
           (a.type() == typeid(string) && b.type() == typeid(int))) {
    string str_a = to_string(boost::any_cast<int>(a));
    string str_b = boost::any_cast<string>(b);
    if (str_a > str_b) return str_a;
    else if (str_b > str_a) return str_b;
}
return "None";
}