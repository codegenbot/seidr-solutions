using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)typeid(double)>a.type()) ? &b : &a;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return a > boost::any_cast<string>(b) ? &a : &b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return a.convert<string>() > boost::any_cast<string>(b) ? &a : &b;
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return *boost::any_cast<int>(&a) >= *boost::any_cast<int>(&b) ? &a : &b;
    }
    return boost::any("None");
}