if (a.type() == boost::any::typeless_type && b.type() != boost::any::typeless_type) {
    if (boost::any_cast<float>(b) > a.cast_to<double>())
        return b;
    else
        return "None";
} else if (b.type() == boost::any::typeless_type && a.type() != boost::any::typeless_type) {
    if (boost::any_cast<float>(a) > b.cast_to<double>())
        return a;
    else
        return "None";
} else if (a.type() == boost::any::typeless_type && b.type() == boost::any::typeless_type) {
    if (boost::lexical_cast<int>(a.cast_to<string>()) > boost::lexical_cast<int>(b.cast_to<string>()))
        return a;
    else
        return "None";
} else if (std::isnan(boost::any_cast<float>(a))) {
    return b;
} else if (std::isnan(boost::any_cast<float>(b))) {
    return a;
} else {
    if (boost::any_cast<float>(a) > boost::any_cast<float>(b))
        return a;
    else
        return b;
}