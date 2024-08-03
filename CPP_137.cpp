boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (float)a < b ? &b : &a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (int)a > b ? &a : &b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        return (stof(b.cast<string>()) < stof(a.cast<string>())) ? &b : &a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return (stof(b.cast<string>()) > stof(a.cast<string>())) ? &a : &b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (stof(a.cast<string>()) > stof(b.cast<string>())) ? &a : &b;
    }
    else {
        return "None";
    }
}