Here is the completed code:

```cpp
#include <boost/lexical_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : (b == boost::any(typeid(float))) ? "None" : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (int)b ? a : (a == boost::any(typeid(float))) ? "None" : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::lexical_cast<string>(a);
        string str2 = boost::lexical_cast<string>(b);
        return str1 > str2 ? a : (str1 == str2) ? "None" : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int num1 = boost::lexical_cast<int>(a);
        string str2 = boost::lexical_cast<string>(b);
        return num1 > boost::lexical_cast<int>(str2) ? a : "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int num2 = boost::lexical_cast<int>(a);
        string str1 = boost::lexical_cast<string>(b);
        return boost::lexical_cast<int>(str1) > num2 ? a : "None";
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float flt1 = boost::lexical_cast<float>(a);
        string str2 = boost::lexical_cast<string>(b);
        return flt1 > boost::lexical_cast<float>(str2) ? a : "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float flt2 = boost::lexical_cast<float>(a);
        string str1 = boost::lexical_cast<string>(b);
        return boost::lexical_cast<float>(str1) > flt2 ? a : "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double dbl1 = boost::lexical_cast<double>(a);
        string str2 = boost::lexical_cast<string>(b);
        return dbl1 > boost::lexical_cast<double>(str2) ? a : "None";
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double dbl2 = boost::lexical_cast<double>(a);
        string str1 = boost::lexical_cast<string>(b);
        return dbl2 > boost::lexical_cast<double>(str1) ? a : "None";
    }
    else if (a.type() == typeid(double) && b.type() == typeid(float)) {
        double dbl1 = boost::lexical_cast<double>(a);
        float flt2 = boost::lexical_cast<float>(b);
        return dbl1 > flt2 ? a : (dbl1 == flt2) ? "None" : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        float flt1 = boost::lexical_cast<float>(a);
        double dbl2 = boost::lexical_cast<double>(b);
        return flt1 > dbl2 ? a : (flt1 == dbl2) ? "None" : b;
    }
    else if ((int)a > (float)b || (int)a > boost::lexical_cast<int>(boost::any_to-any(b))) {
        return a;
    }
    else if ((int)b > (float)a || (int)b > boost::lexical_cast<int>(boost::any_to-any(a))) {
        return b;
    }
    else {
        return "None";
    }
}