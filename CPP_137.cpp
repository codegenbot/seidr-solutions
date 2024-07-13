if (a.type() == boost::any::typeless_type) {
    if (b.type() == boost::any::typeless_type) {
        return "None";
    } else {
        return b;
    }
} else {
    if (b.type() == boost::any::typeless_type) {
        return a;
    } else {
        if (a.convert_to<double>() > b.convert_to<double>()) {
            return a;
        } else if (a.convert_to<double>() < b.convert_to<double>()) {
            return b;
        } else {
            return "None";
        }
    }
}