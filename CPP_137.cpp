if (a.type() == typeid(int) && b.type() == typeid(int))
    return (static_cast<int>(a.convert_to<int>) > static_cast<int>(b.convert_to<int})) ?
           boost::any(a) : ((static_cast<int>(a.convert_to<int>) == static_cast<int>(b.convert_to<int>))) ? boost::any("None") : boost::any(b);
else if (a.type() == typeid(float) && b.type() == typeid(float))
    return (static_cast<float>(a.convert_to<float>) > static_cast<float>(b.convert_to<float})) ?
           a : ((static_cast<float>(a.convert_to<float>) == static_cast<float>(b.convert_to<float>))) ? boost::any("None") : b;
else if (a.type() == typeid(string) && b.type() == typeid(string))
    return (static_cast<string>(a.convert_to<string>).compare(static_cast<string>(b.convert_to<string>)) > 0) ?
           a : ((static_cast<string>(a.convert_to<string>).compare(static_cast<string>(b.convert_to<string>)) == 0)) ? boost::any("None") : b;
else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(float)))
    return static_cast<string>(b.convert_to<string>);
else if ((a.type() == typeid(int) || a.type() == typeid(float)) && b.type() == typeid(string))
    return static_cast<string>(a.convert_to<string>);
else
    return "None";