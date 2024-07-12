boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (stof(b.convert_to<string>().c_str()) > stof(a.convert_to<string>().c_str()))
            return b;
        else
            return "None";
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (get<int>(a) < get<int>(b))
            return boost::any(b);
        else if (get<int>(a) > get<int>(b))
            return boost::any(a);
        else
            return "None";
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (get<float>(a) < get<float>(b))
            return boost::any(b);
        else if (get<float>(a) > get<float>(b))
            return boost::any(a);
        else
            return "None";
    }
    else {
        return b;
    }
}