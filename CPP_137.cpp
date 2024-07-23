```
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if ((boost::any_cast<int>(a) < boost::any_cast<string>(b))) {
            return b;
        } else if ((boost::any_cast<int>(a) > boost::any_cast<string>(b))) {
            return a;
        }
        return "None";
    }
    if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a;
    }
    if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return a;
    }
    if (a.type() == typeid(string) && b.type() == typeid(int)) {
        if ((boost::any_cast<string>(a) < to_string(boost::any_cast<int>(b)))) {
            return boost::any(a);
        } else if ((boost::any_cast<string>(a) > to_string(boost::any_cast<int>(b)))) {
            return b;
        }
        return "None";
    }
    if (a.type() == typeid(string) && b.type() == typeid(float)) {
        if ((boost::any_cast<string>(a) < boost::lexical_cast<string>(b))) {
            return b;
        } else if ((boost::any_cast<string>(a) > boost::lexical_cast<string>(b))) {
            return a;
        }
        return "None";
    }
    if (a.type() == typeid(string) && b.type() == typeid(double)) {
        if ((boost::any_cast<string>(a) < boost::lexical_cast<string>(b))) {
            return b;
        } else if ((boost::any_cast<string>(a) > boost::lexical_cast<string>(b))) {
            return a;
        }
        return "None";
    }
    if (a.type() == typeid(int) && a.type() == typeid(float)) {
        if (boost::any_cast<int>(a) < boost::any_cast<float>(a)) {
            return b;
        } else if (boost::any_cast<int>(a) > boost::any_cast<float>(a)) {
            return a;
        }
        return "None";
    }
    if (a.type() == typeid(int) && a.type() == typeid(double)) {
        if (boost::any_cast<int>(a) < boost::any_cast<double>(a)) {
            return b;
        } else if (boost::any_cast<int>(a) > boost::any_cast<double>(a)) {
            return a;
        }
        return "None";
    }
    if (a.type() == typeid(float) && a.type() == typeid(double)) {
        if (boost::any_cast<float>(a) < boost::any_cast<double>(a)) {
            return b;
        } else if (boost::any_cast<float>(a) > boost::any_cast<double>(a)) {
            return a;
        }
        return "None";
    }
    if ((boost::any_cast<string>(a) == boost::any_cast<string>(b))) {
        return "None";
    }
    if ((boost::any_cast<int>(a) < boost::any_cast<int>(b))) {
        return b;
    } else if ((boost::any_cast<int>(a) > boost::any_cast<int>(b))) {
        return a;
    }
    if ((boost::any_cast<float>(a) < boost::any_cast<float>(b))) {
        return b;
    } else if ((boost::any_cast<float>(a) > boost::any_cast<float>(b))) {
        return a;
    }
    if ((boost::any_cast<double>(a) < boost::any_cast<double>(b))) {
        return b;
    } else if ((boost::any_cast<double>(a) > boost::any_cast<double>(b))) {
        return a;
    }
}