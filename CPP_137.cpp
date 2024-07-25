boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any((int)std::max(get<int>(a), get<int>(b)));
    }
    else if ((a.type() == typeid(float) || a.type() == typeid(double)) &&
             (b.type() == typeid(float) || b.type() == typeid(double))) {
        return boost::any(std::max(get<float>(a), get<float>(b)));
    }
    else if ((a.type() == typeid(string) && (b.type() == typeid(int) ||
                                             b.type() == typeid(float) || b.type() == typeid(double)))) {
        return boost::any((string)get<int>(b));
    }
    else if ((b.type() == typeid(string) && (a.type() == typeid(int) ||
                                             a.type() == typeid(float) || a.type() == typeid(double)))) {
        return boost::any((string)a);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (get<string>(a) > get<string>(b))
            return a;
        else
            return "None";
    }
    else {
        return "None";
    }
}