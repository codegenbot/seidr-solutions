boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > (int)a ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (float)b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return a.convert<string>().compare(b.convert<string>()) > 0 ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (int)stoi(b.convert<string>()) > (int)a ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return (int)stoi(a.convert<string>()) > (int)b ? a : b;
    }
    else {
        return "None";
    }
}