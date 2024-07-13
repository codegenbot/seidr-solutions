if (a.type() == typeid(int) && b.type() == typeid(int)) {
    int ai = boost::any_cast<int>(a);
    int bi = boost::any_cast<int>(b);
    if (ai > bi) return a;
    else if (ai < bi) return b;
    else return boost::any("None");
} else if (a.type() == typeid(float) && b.type() == typeid(float)) {
    float af = boost::any_cast<float>(a);
    float bf = boost::any_cast<float>(b);
    if (af > bf) return a;
    else if (af < bf) return b;
    else return boost::any("None");
} else if (a.type() == typeid(string) && b.type() == typeid(string)) {
    string sa = boost::any_cast<string>(a);
    string sb = boost::any_cast<string>(b);
    if (stof(sa) > stof(sb)) return a;
    else if (stof(sa) < stof(sb)) return b;
    else return boost::any("None");
} else {
    throw invalid_argument("Invalid type");
}