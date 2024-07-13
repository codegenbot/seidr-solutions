if (a.type() == boost::any::type::void_) {
    if (b.type() == boost::any::type::string) {
        return b;
    }
} else if (b.type() == boost::any::type::void_) {
    if (a.type() == boost::any::type::string) {
        return a;
    }
}
if (boost::any_cast<double>(a) > boost::any_cast<double>(b)) {
    return a;
} else if (boost::any_cast<double>(a) < boost::any_cast<double>(b)) {
    return b;
} else {
    return "None";
}