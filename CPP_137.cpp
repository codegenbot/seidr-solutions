if (a.type() == boost::any::typeclass<int> && 
    b.type() == boost::any::typeclass<int>) {
    return (get<int>(a) > get<int>(b)) ? a : b;
} else if (a.type() == boost::any::typeclass<float> &&
           b.type() == boost::any::typeclass<float>) {
    return (get<float>(a) > get<float>(b)) ? a : b;
} else if ((a.type() == boost::any::typeclass<int> &&
            b.type() == boost::any::typeclass<std::string>) ||
           (a.type() == boost::any::typeclass<std::string> &&
            b.type() == boost::any::typeclass<int>)) {
    return a > b ? a : b;
} else if ((a.type() == boost::any::typeclass<float> &&
            b.type() == boost::any::typeclass<std::string>) ||
           (a.type() == boost::any::typeclass<std::string> &&
            b.type() == boost::any::typeclass<float>)) {
    return a.convert<boost::any&(std::string)>().any()->compare_to(b.convert<boost::any&(std::string)>().any()) > 0 ? a : b;
} else if (a.type() != b.type()) {
    return "None";
}