boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return a;
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double da = atof(a.cast<string>().c_str());
        double db = boost::any_cast<double>(b);
        if (da > db) {
            return a;
        } else if (da < db) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double da = boost::any_cast<double>(a);
        double db = atof(b.cast<string>().c_str());
        if (da > db) {
            return a;
        } else if (da < db) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = a.cast<string>();
        string sb = b.cast<string>();
        double da = atof(sa.c_str());
        double db = atof(sb.c_str());
        if (da > db) {
            return a;
        } else if (da < db) {
            return b;
        } else {
            return boost::any("None");
        }
    } else {
        return boost::any("Error: unsupported type");
    }
}