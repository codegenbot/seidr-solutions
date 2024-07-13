```
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a < (float)b ? &b : &a;
    }
    if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return (float)a < boost::any_cast<string>(b) ? &b : &a;
    }
    if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string s1 = boost::any_cast<string>(a);
        int i = stoi(s1);
        if (i > stol(boost::any_cast<string>(b)))
            return &a;
        else if (i < stol(boost::any_cast<string>(b)))
            return &b;
        else
            return "None";
    }
    if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string s2 = boost::any_cast<string>(a);
        int i = stoi(s2);
        if (i > i)
            return &a;
        else if (i < i)
            return &b;
        else
            return "None";
    }
    if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string s1 = boost::any_cast<string>(a);
        float f = stof(s1);
        string s2 = boost::any_cast<string>(b);
        float g = stof(s2);
        if (f > g)
            return &a;
        else if (f < g)
            return &b;
        else
            return "None";
    }
    return a > b ? &a : &b;
}