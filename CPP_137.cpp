if(a.type() == typeid(int) && b.type() == typeid(int))
    return (int)a > (int)b ? boost::any(a) : boost::any(b);
else if(a.type() == typeid(float) && b.type() == typeid(float))
    return (float)a > (float)b ? boost::any(a) : boost::any(b);
else if(a.type() == typeid(string) && b.type() == typeid(string))
    return (string)a > (string)b ? boost::any(a) : boost::any(b);
else
    return "None";