```
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
    return (boost::any_cast<double>(a) > boost::any_cast<double>(b)) ? a : b;
}
else {
    if (boost::any_cast<string>(a) > boost::any_cast<string>(b)) {
        return a;
    }
    else {
        return b;
    }
}