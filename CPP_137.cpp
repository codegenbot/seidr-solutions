if (a.type() == boost::any::typeless_type || b.type() == boost::any::typeless_type) {
    if (boost::any_cast<double>(a) > boost::any_cast<double>(b)) {
        return a;
    } else if (boost::any_cast<double>(a) < boost::any_cast<double>(b)) {
        return b;
    } else {
        return "None";
    }
} else {
    if (a.convert_to<string>().compare(b.convert_to<string>()) > 0) {
        return a;
    } else if (a.convert_to<string>().compare(b.convert_to<string>()) < 0) {
        return b;
    } else {
        return "None";
    }
}