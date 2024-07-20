using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int x = boost::any_cast<int>(a);
        float y = boost::any_cast<float>(b);
        return (x > y) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float x = boost::any_cast<float>(a);
        int y = boost::any_cast<int>(b);
        return (x > y) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string s = boost::any_cast<string>(a);
        float f = boost::any_cast<float>(b);
        return (stof(s) > f) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float x = boost::any_cast<float>(a);
        string s = boost::any_cast<string>(b);
        return (x > stof(s)) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = boost::any_cast<string>(a);
        string s2 = boost::any_cast<string>(b);
        return (stof(s1) > stof(s2)) ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return ((long long)x > (long long)y) ? a : b;
    }

    return any();
}