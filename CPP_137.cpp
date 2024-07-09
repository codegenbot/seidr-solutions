boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return a < b ? b : (a == b ? boost::any("None") : a);
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b < a ? b : (b == a ? boost::any("None") : a);
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double ba = stod((string)b.to_pointer());
        return ba > (double)a.convert_to<double>() ? b : (ba == (double)a.convert_to<double>() ? boost::any("None") : a);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        double ca = stod((string)a.to_pointer());
        double cb = stod((string)b.to_pointer());
        return cb > ca ? b : (cb == ca ? boost::any("None") : a);
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        string ba = to_string(a.convert_to<double>());
        double cb = stod((string)b.to_pointer());
        return cb > std::stold(ba) ? b : (cb == std::stold(ba) ? boost::any("None") : a);
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int ca = a.convert_to<int>();
        string cb = (string)b.to_pointer();
        double cbd = stod(cb);
        return cbd > ca ? boost::any(cb) : (cbd == ca ? boost::any("None") : boost::any(ca));
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int ca = a.convert_to<int>();
        string cb = (string)b.to_pointer();
        double cbd = stod(cb);
        return cbd > ca ? boost::any(cb) : (cbd == ca ? boost::any("None") : boost::any(ca));
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int ca = a.convert_to<int>();
        int cb = b.convert_to<int>();
        return cb > ca ? b : (cb == ca ? boost::any("None") : a);
    }
    return a;
}