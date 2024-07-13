if (a.type() == boost::any::type::void_) {
    if (b.type() == boost::any::type::void_) return "None";
    return b;
} else if (b.type() == boost::any::type::void_) {
    return a;
}

boost::any_cast<double>(a) > boost::any_cast<double>(b)
? a
: b;