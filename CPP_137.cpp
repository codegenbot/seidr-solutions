if (a.type() == typeid(int)) {
    if (b.type() == typeid(float))
        return b;
    else if (b.type() == typeid(string))
        return b;
    else if (b.type() == typeid(int)) {
        int int_a = boost::any_cast<int>(a);
        int int_b = boost::any_cast<int>(b);
        if (int_a < int_b) return b;
        else if (int_a > int_b) return a;
        else return "None";
    }
} else if (a.type() == typeid(float)) {
    if (b.type() == typeid(float)) {
        float float_a = boost::any_cast<float>(a);
        float float_b = boost::any_cast<float>(b);
        if (float_a < float_b) return b;
        else if (float_a > float_b) return a;
        else return "None";
    } else if (b.type() == typeid(string))
        return b;
} else if (a.type() == typeid(string) && b.type() == typeid(string)) {
    string str_a = boost::any_cast<string>(a);
    string str_b = boost::any_cast<string>(b);
    if (str_a < str_b) return b;
    else if (str_a > str_b) return a;
    else return "None";
}
return "None";