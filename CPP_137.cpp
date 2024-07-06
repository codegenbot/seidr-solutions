Here is the completed code:

```cpp
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b);
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if (boost::any_cast<int>(a) < boost::lexical_cast<int>(b)) {
            return b;
        } else {
            return "None";
        }
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        if (boost::any_cast<double>(a) < boost::lexical_cast<double>(b)) {
            return b;
        } else {
            return "None";
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        if (boost::lexical_cast<int>(a) < a) {
            return a;
        } else {
            return "None";
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        if (boost::lexical_cast<double>(a) < a) {
            return a;
        } else {
            return "None";
        }
    }
    else if (a.type() == typeid(int) && a > boost::any_cast<int>(b)) {
        return &a;
    }
    else if (a.type() == typeid(double) && a > boost::any_cast<double>(b)) {
        return a;
    }
    else if (a.type() == typeid(string) && a.compare(boost::any_cast<string>(b)) > 0) {
        return a;
    }
    else {
        return "None";
    }
}