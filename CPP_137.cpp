boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > (int)a ? boost::any(b) : (b.convert_to<boost::any>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)b > (float)a ? boost::any(b) : (b.convert_to<boost::any>());
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str_a = a.convert_to<string>();
        string str_b = b.convert_to<string>();
        if (str_b > str_a)
            return boost::any(b);
        else if (str_b < str_a)
            return boost::any(a);
        else
            return "None";
    }
    else {
        return "None";
    }
}