boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any(max(a.get<int>(), b.get<int>()));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return a > b ? a : b;
    }
    else if ((a.type() == typeid(string) || a.type() == typeid(char *)) &&
             (b.type() == typeid(string) || b.type() == typeid(char *))) {
        return (a.get<string>().compare(b.get<string>()) > 0) ? a : ((string)boost::any_cast<b>(b));
    }
    else if ((a.type() == typeid(int) && b.type() == typeid(float)) ||
             (a.type() == typeid(float) && b.type() == typeid(int))) {
        return boost::any(a.get<int>() > b.get<float>());
    }
    else {
        return "None";
    }
}