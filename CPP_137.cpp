if (a.type() == typeid(int) && b.type() == typeid(float)) {
    return (int)b > a ? boost::any(b) : boost::any(a);
} else if (a.type() == typeid(float) && b.type() == typeid(int)) {
    return (float)a > b ? boost::any(a) : boost::any(b);
} else if (a.type() == typeid(string) && b.type() == typeid(string)) {
    return a.convert<string>()->compare(b.convert<string>()) > 0 ? boost::any(a) : (boost::any)b;
} else if (a.type() == typeid(int) && b.type() == typeid(string)) {
    int x = boost::any_cast<int>(a);
    string y = boost::any_cast<string>(b);
    return x > stol(y) ? boost::any(a) : (boost::any)b;
} else if (a.type() == typeid(string) && b.type() == typeid(int)) {
    int x = boost::any_cast<int>(b);
    string y = boost::any_cast<string>(a);
    return stol(y) > x ? boost::any(a) : (boost::any)b;
} else if (a.type() == typeid(float) && b.type() == typeid(string)) {
    float x = boost::any_cast<float>(a);
    string y = boost::any_cast<string>(b);
    return x > stof(y) ? boost::any(a) : (boost::any)b;
} else if (a.type() == typeid(string) && b.type() == typeid(float)) {
    float x = boost::any_cast<float>(b);
    string y = boost::any_cast<string>(a);
    return stof(y) > x ? boost::any(a) : (boost::any)b;
} else if (a.convert<int>() == b.convert<int>()) {
    return "None";
}