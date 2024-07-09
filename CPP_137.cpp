```
if (a.type() == typeid(int) && b.type() == typeid(float)) {
    return boost::any(b);
} else if (a.type() == typeid(float) && b.type() == typeid(string)) {
    string str = boost::any_cast<string>(b);
    if (str.find('.') != string::npos || str.find(',') != string::npos)
        return boost::any(str);
    else
        return a;
} else if (a.type() == typeid(string) && b.type() == typeid(int)) {
    int x = boost::any_cast<int>(a);
    if (x < boost::any_cast<int>(b))
        return b;
    else if (x > boost::any_cast<int>(b))
        return a;
    else
        return boost::any("None");
} else if (a.type() == typeid(int) && b.type() == typeid(int)) {
    int x = boost::any_cast<int>(a);
    int y = boost::any_cast<int>(b);
    if (x < y)
        return a;
    else if (x > y)
        return b;
    else
        return boost::any("None");
} else if (a.type() == typeid(float) && b.type() == typeid(float)) {
    float x = boost::any_cast<float>(a);
    float y = boost::any_cast<float>(b);
    if (x < y)
        return a;
    else if (x > y)
        return b;
    else
        return boost::any("None");
} else if (a.type() == typeid(string) && b.type() == typeid(string)) {
    string x = boost::any_cast<string>(a);
    string y = boost::any_cast<string>(b);
    if (x.compare(y) < 0)
        return a;
    else if (x.compare(y) > 0)
        return b;
    else
        return boost::any("None");
}