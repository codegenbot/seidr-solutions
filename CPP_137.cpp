if (a.type() == boost::any::typeless_type || b.type() == boost::any::typeless_type) {
    if (a.type() != b.type()) {
        return a > b ? a : b;
    } else {
        string a_str = a.convert<string>();
        string b_str = b.convert<string>();

        double a_num = stod(a_str);
        double b_num = stod(b_str);

        if (a_num > b_num) {
            return a;
        } else if (a_num < b_num) {
            return b;
        } else {
            return boost::any("None");
        }
    }
} else if (a.type() == boost::any::typeless_type) {
    double a_num = stod(a.convert<string>());
    double b_num = stod(b.convert<string>());

    if (a_num > b_num) {
        return a;
    } else if (a_num < b_num) {
        return b;
    } else {
        return boost::any("None");
    }
} else if (b.type() == boost::any::typeless_type) {
    double a_num = stod(a.convert<string>());
    double b_num = stod(b.convert<string>());

    if (a_num > b_num) {
        return a;
    } else if (a_num < b_num) {
        return b;
    } else {
        return boost::any("None");
    }
} else {
    return a > b ? a : b;
}