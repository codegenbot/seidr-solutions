```
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b) > boost::any_cast<int>(a) ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b) > boost::any_cast<int>(a) ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<float>(a) > boost::any_cast<int>(b) ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any_cast<double>(a) > boost::any_cast<int>(b) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float fa = stof(any_cast<string>(a));
        float fb = boost::any_cast<float>(b);
        return fb > fa ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double da = stod(any_cast<string>(a));
        double db = boost::any_cast<double>(b);
        return db > da ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int ia = stoi(any_cast<string>(a));
        float fb = boost::any_cast<float>(b);
        return fb > ia ? b : a;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(float)) {
        double da = boost::any_cast<double>(a);
        float fb = boost::any_cast<float>(b);
        return da > fb ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = any_cast<string>(a);
        string sb = any_cast<string>(b);
        double da = stod(sa), db = stod(sb);
        return da > db ? a : b;
    }
    else if (boost::any_cast<int>(a) == boost::any_cast<int>(b)) {
        return "None";
    }
    return a;