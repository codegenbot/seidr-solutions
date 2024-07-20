if (a.type() == boost::any::type::void_) {
    if (b.type() == boost::any::type::void_) return "None";
    boost::any max = b;
    return max;
} else if (b.type() == boost::any::type::void_) {
    boost::any max = a;
    return max;
}

boost::any_cast<double>(a) > boost::any_cast<double>(b)
    ? boost::any(a)
    : (boost::any_cast<double>(a) < boost::any_cast<double>(b)
       ? b
       : "None");