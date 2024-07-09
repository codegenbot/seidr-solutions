boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max(a.convert_to<int>(), b.convert_to<float>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return max(a, boost::any(b.convert_to<int>()));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = a.convert_to<string>();
        string s2 = b.convert_to<string>();

        if (s1 > s2)
            return a;
        else if (s1 < s2)
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int x = a.convert_to<int>();
        string s = b.convert_to<string>();

        if (stoi(s) > x)
            return b;
        else if (stoi(s) < x)
            return a;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int x = b.convert_to<int>();
        string s = a.convert_to<string>();

        if (stoi(s) > x)
            return a;
        else if (stoi(s) < x)
            return boost::any(b);
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float f = a.convert_to<float>();
        string s = b.convert_to<string>();

        if (stof(s) > f)
            return b;
        else if (stof(s) < f)
            return a;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float f = b.convert_to<float>();
        string s = a.convert_to<string>();

        if (stof(s) > f)
            return a;
        else if (stof(s) < f)
            return boost::any(b);
        else
            return boost::any("None");
    }
    else {
        if ((a.convert_to<int>()) > (b.convert_to<float>()))
            return a;
        else if ((a.convert_to<int>()) < (b.convert_to<float>()))
            return b;
        else
            return boost::any("None");
    }
}