#include <boost/any.hpp>
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return ((int)a > (int)b) ? a : ((int)a == (int)b) ? boost::any(b) : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return ((float)a > (float)b) ? a : ((float)a == (float)b) ? boost::any(b) : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return ((string)a > (string)b) ? a : ((string)a == (string)b) ? boost::any(b) : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return ((int)a > (float)b) ? a : ((int)a < (float)b) ? b : boost::any();
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (stoi((string)b) > (int)a) ? b : (stoi((string)b) < (int)a) ? a : boost::any();
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return ((float)a > (int)b) ? a : ((float)a < (int)b) ? b : boost::any();
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return (stof((string)b) > (float)a) ? b : (stof((string)b) < (float)a) ? a : boost::any();
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return (stoi((string)a) > (int)b) ? a : (stoi((string)a) < (int)b) ? b : boost::any();
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        return (stof((string)a) > (float)b) ? a : (stof((string)a) < (float)b) ? b : boost::any();
    }
    return a; // default to the first value
}