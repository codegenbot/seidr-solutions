if (a.type() == typeid(int) && b.type() == typeid(int)) {
    int int_a = boost::any_cast<int>(a);
    int int_b = boost::any_cast<int>(b);
    if (int_a > int_b) {
        return int_a;
    } else if (int_b > int_a) {
        return int_b;
    }
} else if (a.type() == typeid(float) && b.type() == typeid(float)) {
    float float_a = boost::any_cast<float>(a);
    float float_b = boost::any_cast<float>(b);
    if (float_a > float_b) {
        return float_a;
    } else if (float_b > float_a) {
        return float_b;
    }
} else if (a.type() == typeid(string) && b.type() == typeid(string)) {
    string string_a = boost::any_cast<string>(a);
    string string_b = boost::any_cast<string>(b);
    if (string_a > string_b) {
        return string_a;
    } else if (string_b > string_a) {
        return string_b;
    }
}
return "None";
}