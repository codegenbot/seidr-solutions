if (a.type() == boost::any::type_code::void_) {
    if (b.type() == boost::any::type_code::void_)
        return "None";
    else
        return b;
} else if (b.type() == boost::any::type_code::void_)
    return a;
else {
    if (a.type() == boost::any::type_code::non_pointer_type && b.type() == boost::any::type_code::non_pointer_type) {
        if (std::stoi(std::string(a.get<char>().c_str())) > std::stoi(std::string(b.get<char>().c_str())))
            return a;
        else if (std::stoi(std::string(a.get<char>().c_str())) < std::stoi(std::string(b.get<char>().c_str())))
            return b;
        else
            return "None";
    } else {
        double x = boost::any_cast<double>(a);
        double y = boost::any_cast<double>(b);
        if (x > y)
            return a;
        else if (x < y)
            return b;
        else
            return "None";
    }
}