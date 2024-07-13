```
if (a.type() == typeid(int) && b.type() == typeid(int)) {
    return (int)a > (int)b ? boost::any(a) : ((int)a == (int)b) ? boost::any("None") : boost::any(b);
} else if (a.type() == typeid(float) && b.type() == typeid(float)) {
    return (float)a > (float)b ? boost::any(a) : ((float)a == (float)b) ? boost::any("None") : boost::any(b);
} else if (a.type() == typeid(string) && b.type() == typeid(string)) {
    return (string)a > (string)b ? boost::any(a) : ((string)a == (string)b) ? boost::any("None") : boost::any(b);
} else if (a.type() == typeid(int) && b.type() == typeid(float)) {
    return (float)b < (int)a ? boost::any(a) : (float)b > (int)a ? boost::any(b) : boost::any("None");
} else if (a.type() == typeid(int) && b.type() == typeid(string)) {
    int x = stoi((string)b);
    return (int)a > x ? boost::any(a) : ((int)a < x || a.convert_to<int>() == 0) ? boost::any(b) : boost::any("None");
} else if (a.type() == typeid(float) && b.type() == typeid(int)) {
    int x = (int)b;
    return (float)a > x ? boost::any(a) : ((float)a < x || a.convert_to<int>() == 0) ? boost::any(b) : boost::any("None");
} else if (a.type() == typeid(float) && b.type() == typeid(string)) {
    float y = stof((string)b);
    return (float)a > y ? boost::any(a) : ((float)a < y || a.convert_to<float>() == 0) ? boost::any(b) : boost::any("None");
} else if (a.type() == typeid(string) && b.type() == typeid(int)) {
    int x = (int)b;
    return stof((string)a) > x ? boost::any(a) : ((stof((string)a)) < x || a.convert_to<float>() == 0) ? boost::any(b) : boost::any("None");
} else if (a.type() == typeid(string) && b.type() == typeid(float)) {
    float y = (float)b;
    return stof((string)a) > y ? boost::any(a) : ((stof((string)a)) < y || a.convert_to<float>() == 0) ? boost::any(b) : boost::any("None");
} else
    return "Invalid input";