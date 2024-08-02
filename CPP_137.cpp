if (a.type() == boost::any::typeless_type) {
    if (b.type() == boost::any::typeless_type) {
        return "None";
    }
    else if (boost::any_cast<double>(b) > boost::any_cast<double>(a)) {
        return b;
    }
    else {
        return a;
    }
}
else if (b.type() == boost::any::typeless_type) {
    if (boost::any_cast<double>(a) > boost::any_cast<double>(b)) {
        return a;
    }
    else {
        return "None";
    }
}
else {
    if (boost::any_cast<std::string>(a) > boost::any_cast<std::string>(b)) {
        return a;
    }
    else if (boost::any_cast<std::string>(b) > boost::any_cast<std::string>(a)) {
        return b;
    }
    else {
        return "None";
    }
}