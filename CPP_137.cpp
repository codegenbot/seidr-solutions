if (a.type() == typeid(int) && b.type() == typeid(int)) {
    return (int)a > (int)b ? boost::any(a) : boost::any(b);
} else if (a.type() == typeid(float) && b.type() == typeid(float)) {
    return (float)a > (float)b ? boost::any(a) : boost::any(b);
} else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
    return a.convert<std::string>()->compare(b.convert<std::string>()) > 0 ? a : b;
} else if (a.type() == typeid(float) && b.type() == typeid(int)) {
    return (float)b < (float)a ? boost::any(a) : (b == 0 ? "None" : boost::any(b));
} else if (a.type() == typeid(int) && b.type() == typeid(float)) {
    return (int)a > (float)b ? boost::any(a) : (float)a > (int)b ? boost::any(a) : "None";
} else {
    return "None";
}