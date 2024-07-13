if (a.type() == boost::any::typeclass<int> &&
    b.type() == boost::any::typeclass<int>) {
    if (get<int>(a) > get<int>(b)) return a;
    else if (get<int>(a) < get<int>(b)) return b;
    else return "None";
} else if (a.type() == boost::any::typeclass<float> &&
           b.type() == boost::any::typeclass<float>) {
    if (get<float>(a) > get<float>(b)) return a;
    else if (get<float>(a) < get<float>(b)) return b;
    else return "None";
} else if (a.type() == boost::any::typeclass<std::string> &&
           b.type() == boost::any::typeclass<std::string>) {
    if (get<std::string>(a) > get<std::string>(b)) return a;
    else if (get<std::string>(a) < get<std::string>(b)) return b;
    else return "None";
} else {
    return "Invalid type";
}