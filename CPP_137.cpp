```cpp
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)boost::any_cast<float>(b) > (int)a ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)boost::any_cast<int>(a) > (float)b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        return str1 > str2 ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (int)boost::any_cast<int>(a) > stoi(boost::any_cast<string>(b)) ? a : boost::any(b);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return stoi(boost::any_cast<string>(a)) > (int)b ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return boost::any_cast<float>(a) > stof(boost::any_cast<string>(b)) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        return stof(boost::any_cast<string>(a)) > boost::any_cast<float>(b) ? a : b;
    }
    else {
        return "None";
    }
}