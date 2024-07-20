if (a.type() == boost::any::typeclass<string>) {
    if (b.type() == boost::any::typeclass<string>) {
        return a.convert<string>().compare(b.convert<string>()) > 0 ? a : b.convert<string>() == "None" ? "None" : b;
    } else if (boost::any_cast<double>(b) < 1.0) {
        return a.convert<string>();
    }
} else if (a.type() == boost::any::typeclass<string>) {
    if (b.type() == boost::any::typeclass<string>) {
        return b.convert<string>() > a.convert<string>() ? b : "None";
    } else if (boost::any_cast<double>(b) < 1.0) {
        return "None";
    }
} else if (a.type() == boost::any::typeclass<double> && b.type() == boost::any::typeclass<double>) {
    return a.convert<double>() > b.convert<double>() ? a : b.convert<double>() == a ? "None" : b;
}