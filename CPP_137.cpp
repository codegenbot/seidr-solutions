#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > a.convert_to<int>() ? b : "None";
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)b > a.convert_to<int>() ? boost::any(b) : "None";
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > b.convert_to<int>() ? boost::any(a) : "None";
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a > b.convert_to<int>() ? boost::any(a) : "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float fa = stof((string)a.to_pointer());
        float fb = (float)b;
        return fb > fa ? boost::any(b) : "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double da = stod((string)a.to_pointer());
        double db = (double)b;
        return db > da ? boost::any(b) : "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int ia = stoi((string)a.to_pointer());
        int ib = (int)b;
        return ib > ia ? boost::any(b) : "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = (string)a.to_pointer();
        string s2 = (string)b.to_pointer();
        double da1 = stod(s1);
        double da2 = stod(s2);
        return da2 > da1 ? boost::any(b) : "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = (string)a.to_pointer();
        string s2 = (string)b.to_pointer();
        int ia1 = stoi(s1);
        int ia2 = stoi(s2);
        return ia2 > ia1 ? boost::any(b) : "None";
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string s = (string)b.to_pointer();
        float fa = stof(s);
        int ia = a.convert_to<int>();
        return fa > ia ? boost::any(b) : "None";
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        string s = (string)b.to_pointer();
        double da = stod(s);
        double db = a.convert_to<double>();
        return da > db ? boost::any(b) : "None";
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string s = (string)b.to_pointer();
        int ia = stoi(s);
        int ib = a.convert_to<int>();
        return ia > ib ? boost::any(b) : "None";
    }
    else {
        return "None";
    }
}