Here is the completed code:

```cpp
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b);
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b);
    } else if (a.type() == typeid(double) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b);
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        if (boost::any_cast<string>(a) == "None") return a;
        return boost::any_cast<string>(b);
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        if (boost::any_cast<string>(a) == "None") return a;
        return boost::any_cast<string>(b);
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        if (boost::any_cast<string>(a) == "None") return a;
        return boost::any_cast<string>(b);
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if (boost::any_cast<int>(a) > boost::any_cast<int>(boost::any_cast<string>(b), 0)) {
            return a;
        } else {
            return b;
        }
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        if (boost::any_cast<double>(a) > boost::any_cast<int>(boost::any_cast<string>(b), 0)) {
            return a;
        } else {
            return b;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        if (boost::any_cast<float>(a) > boost::any_cast<int>(boost::any_cast<string>(b), 0)) {
            return a;
        } else {
            return b;
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
            return a;
        } else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
            return b;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        if (boost::any_cast<double>(a) > boost::any_cast<double>(b)) {
            return a;
        } else if (boost::any_cast<double>(a) < boost::any_cast<double>(b)) {
            return b;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
            return a;
        } else if (boost::any_cast<float>(a) < boost::any_cast<float>(b)) {
            return b;
        } else {
            return "None";
        }
    }
}