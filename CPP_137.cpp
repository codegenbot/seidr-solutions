boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (float)a < b ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return any_cast<string>(b);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (any_cast<string>(a) > any_cast<string>(b))
            return a;
        else if (any_cast<string>(a) < any_cast<string>(b))
            return b;
        else
            return boost::any("None");
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return a < b ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return any_cast<float>(a) > any_cast<float>(b)
            ? any_cast<boost::any&>(a)
            : any_cast<boost::any&>(b);
    }
    return boost::any("None");
}