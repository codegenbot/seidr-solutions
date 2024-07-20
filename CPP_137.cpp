if(a == b) {
    return "None";
}
if(a.type() == typeid(int) || a.type() == typeid(float)) {
    return max(boost::any_cast<int>(a), boost::any_cast<float>(b));
} else {
    string str_a = boost::any_cast<string>(a);
    string str_b = boost::any_cast<string>(b);
    float float_a = stof(str_a.replace(str_a.find(','), 1, "."));
    float float_b = stof(str_b.replace(str_b.find(','), 1, "."));
    return float_a > float_b ? a : b;
}