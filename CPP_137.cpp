if (a.type() == typeid(int) && b.type() == typeid(int)) {
    if (boost::any_cast<int>(a) == boost::any_cast<int>(b))
        return "None";
    return boost::any_cast<int>(a) > boost::any_cast<int>(b) ? a : b;
} else if (a.type() == typeid(float) && b.type() == typeid(float)) {
    if (boost::any_cast<float>(a) == boost::any_cast<float>(b))
        return "None";
    return boost::any_cast<float>(a) > boost::any_cast<float>(b) ? a : b;
} else {
    string str_a = boost::any_cast<string>(a);
    string str_b = boost::any_cast<string>(b);
    replace(str_a.begin(), str_a.end(), ',', '.');
    replace(str_b.begin(), str_b.end(), ',', '.');
    float float_a = stof(str_a);
    float float_b = stof(str_b);
    if (float_a == float_b)
        return "None";
    return float_a > float_b ? a : b;
}