```
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > a.convert_to<int>() ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)b > a.convert_to<int>() ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return (float)b > a.convert_to<float>() ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return boost::any_cast<string>(b) > boost::any_cast<string>(a) ? b : a;
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(float)) &&
             (b.type() == typeid(int) || b.type() == typeid(float))) {
        return boost::any_cast<double>(a) > boost::any_cast<double>(b) ? a : b;
    }
    else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(float))) {
        return "None";
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(float)) &&
             b.type() == typeid(string)) {
        return "None";
    }
    else
        throw boost::bad_any_cast();
}