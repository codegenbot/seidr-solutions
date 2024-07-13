boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int) a < (float) b ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float) a > (int) b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return a.convert<string>()->compare(b.convert<string>()) > 0 ? &a : &b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        return atoi(str.c_str()) >= a.convert<int>() ? "None" : &b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = boost::any_cast<string>(a);
        return atoi(str.c_str()) >= b.convert<int>() ? "None" : &a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        return atof(str.c_str()) > a.convert<float>() ? &b : "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = boost::any_cast<string>(a);
        return atof(str.c_str()) > b.convert<float>() ? &a : "None";
    }
    else {
        return "None";
    }
}