boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        if ((int)a.convert_to<double>() > (double)b.convert_to<double>()) {
            return a;
        } else if ((int)a.convert_to<double>() < (double)b.convert_to<double>()) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        if ((double)a.convert_to<int>() > (int)b.convert_to<int>()) {
            return a;
        } else if ((double)a.convert_to<int>() < (int)b.convert_to<int>()) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double va = stod(any_cast<string>(a).c_str());
        double vb = (double)b.convert_to<int>();
        if (va > vb) {
            return a;
        } else if (va < vb) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double va = (double)a.convert_to<int>();
        double vb = stod(any_cast<string>(b).c_str());
        if (va > vb) {
            return a;
        } else if (va < vb) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        double va = stod(any_cast<string>(a).c_str());
        double vb = stod(any_cast<string>(b).c_str());
        if (va > vb) {
            return a;
        } else if (va < vb) {
            return b;
        } else {
            return boost::any("None");
        }
    } else {
        return boost::any("None");
    }
}