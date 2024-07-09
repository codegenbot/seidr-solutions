#include <boost/lexical_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > a.convert_to<int>() ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (double)b > a.convert_to<int>() ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (int)a > b.convert_to<float>() ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (int)b > a.convert_to<double>() ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        double fa = boost::lexical_cast<double>(boost::any_cast<string>(a));
        double fb = boost::lexical_cast<double>(b);
        return fb > fa ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double fa = boost::lexical_cast<double>(boost::any_cast<string>(a));
        double fb = boost::lexical_cast<double>(b);
        return fb > fa ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        double fb = boost::lexical_cast<double>(b);
        double fa = boost::lexical_cast<double>(boost::any_cast<string>(a));
        return fa > fb ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double fb = boost::lexical_cast<double>(b);
        double fa = boost::lexical_cast<double>(boost::any_cast<string>(a));
        return fa > fb ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = boost::any_cast<string>(a);
        string s2 = boost::any_cast<string>(b);
        double fa = boost::lexical_cast<double>(s1);
        double fb = boost::lexical_cast<double>(s2);
        return fb > fa ? b : a;
    }
    else {
        return "None";
    }
}