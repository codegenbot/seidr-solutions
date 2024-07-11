using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(double) && b.type() == typeid(double)) {
        return (double)typeid(double)>((double)a,(double)b)?b:a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int)typeid(int)>=(int)a,(int)b)?b:a;
    }
    else if ((a.type() == typeid(string) || a.type() == typeid(double)) &&
             (b.type() == typeid(string) || b.type() == typeid(double))) {
        if (boost::any_cast<double>(a) > boost::any_cast<double>(b))
            return a;
        else if (boost::any_cast<double>(a) < boost::any_cast<double>(b))
            return b;
        else
            return "None";
    }
    else {
        throw invalid_argument("Invalid input types");
    }
}