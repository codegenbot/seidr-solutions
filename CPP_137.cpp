boost::any a = boost::any(static_cast<int>(10));
boost::any b = boost::any("Hello");

if (a.type() == boost::any::typeclass<int> && 
    b.type() == boost::any::typeclass<std::string>) {
    if (get<int>(a) > 0) {
        return a;
    } else if (get<int>(a) < 0) {
        return b;
    } else {
        throw invalid_argument("Invalid types");
    }
} else {
    throw invalid_argument("Invalid types");
}