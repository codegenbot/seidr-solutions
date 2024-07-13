Here is the completed code:

```
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        return boost::any_cast<string>(b);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        return boost::any_cast<string>(b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return a < b ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        if (boost::any_cast<float>(a) > boost::any_cast<string>(b)) {
            return a;
        }
        else if (boost::any_cast<float>(a) < boost::any_cast<string>(b)) {
            return b;
        }
        else {
            return "None";
        }
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        if (boost::any_cast<double>(a) > boost::any_cast<string>(b)) {
            return a;
        }
        else if (boost::any_cast<double>(a) < boost::any_cast<string>(b)) {
            return b;
        }
        else {
            return "None";
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return a > b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        if (boost::any_cast<string>(a) > boost::any_cast<float>(b)) {
            return a;
        }
        else if (boost::any_cast<string>(a) < boost::any_cast<float>(b)) {
            return b;
        }
        else {
            return "None";
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        if (boost::any_cast<string>(a) > boost::any_cast<double>(b)) {
            return a;
        }
        else if (boost::any_cast<string>(a) < boost::any_cast<double>(b)) {
            return b;
        }
        else {
            return "None";
        }
    }

    return "None";
}