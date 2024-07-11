if(a.type() == typeid(int) && b.type() == typeid(int))
    return (int)a > (int)b ? boost::any(a) : ((int)a == (int)b ? boost::any("None") : boost::any(b));
else if(a.type() == typeid(float) && b.type() == typeid(float))
    return (float)a > (float)b ? boost::any(a) : ((float)a == (float)b ? boost::any("None") : boost::any(b));
else if(a.type() == typeid(string) && b.type() == typeid(string))
    return a.convert<string>() > b.convert<string>() ? a : ((a.convert<string>()) == (b.convert<string>())) ? boost::any("None") : b;
else
    return "Invalid input types";