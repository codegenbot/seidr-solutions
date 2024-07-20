if (a.type() == boost::any::typeless_type) {
    if (b.type() == boost::any::typeless_type) {
        return "None";
    }
    else {
        if (std::stod(b.convert_to<std::string>().c_str()) > a.convert_to<double>())
            return b;
        else
            return a;
    }
}
else if (b.type() == boost::any::typeless_type) {
    if (a.convert_to<int>() > std::stoi(b.convert_to<std::string>().erase(0,1).erase(b.convert_to<string>().size()-2,1).c_str()))
        return b;
    else
        return a;
}
else {
    if (std::stod(a.convert_to<std::string>().erase(0,1).erase(a.convert_to<string>().size()-2,1).c_str()) > std::stod(b.convert_to<std::string>().erase(0,1).erase(b.convert_to<string>().size()-2,1).c_str()))
        return a;
    else
        return b;
}