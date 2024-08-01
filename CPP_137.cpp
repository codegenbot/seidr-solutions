```
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float fa = boost::any_cast<float>(a), fb = boost::any_cast<float>(b);
        return fa > fb ? a : b;
    } else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
               (b.type() == typeid(string) || b.type() == typeid(wstring))) {
        string sa = boost::any_cast<string>(a), sb = boost::any_cast<string>(b);
        return sa > sb ? a : b;
    } else if (a.type() == typeid(int) && (b.type() == typeid(float) || b.type() == typeid(string) ||
                                            b.type() == typeid(wstring))) {
        int ai = boost::any_cast<int>(a), fb = boost::any_cast<float>(b);
        return fb > ai ? b : a;
    } else if ((a.type() == typeid(float) || a.type() == typeid(string) || a.type() == typeid(wstring)) &&
               (b.type() == typeid(int))) {
        float fa = boost::any_cast<float>(a), bi = boost::any_cast<int>(b);
        return fa > bi ? a : b;
    } else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) && (b.type() == typeid(float))) {
        string sa = boost::any_cast<string>(a), fb = boost::any_cast<float>(b);
        return "None";
    }
    return "None";
}