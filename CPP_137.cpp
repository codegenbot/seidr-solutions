boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int) b > (int)a ? b : "None";
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)b > a ? boost::any(b) : "None";
    }
    else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return (float)b > a ? boost::any(b) : "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        try {
            double d = stod(b.convert<string>().c_str());
            return d > stod(a.convert<string>().c_str()) ? b : "None";
        }
        catch (...) {
            return b;
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return a.convert<string>().compare(b.convert<string>()) > 0 ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        try {
            double d = stod(b.convert<string>().c_str());
            return d > a ? boost::any(d) : "None";
        }
        catch (...) {
            return "None";
        }
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        try {
            double d = stod(a.convert<string>().c_str());
            return d > stod(b.convert<string>().c_str()) ? a : b;
        }
        catch (...) {
            return "None";
        }
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return a.convert<int>() > b.convert<int>() ? boost::any(a) : "None";
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return a.convert<float>() > b.convert<float>() ? boost::any(a) : "None";
    }
    else {
        return "None";
    }
}