#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace std;
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int b_int = boost::lexical_cast<int>(b);
        if (a.convert_to<int>() > b_int) {
            return a;
        }
        else if (a.convert_to<int>() < b_int) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        int a_int = boost::lexical_cast<int>(a);
        if (a_int > boost::lexical_cast<int>(b)) {
            return a;
        }
        else if (a_int < boost::lexical_cast<int>(b)) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        int b_int = boost::lexical_cast<int>(b);
        if (boost::lexical_cast<double>(a) > b_int) {
            return a;
        }
        else if (boost::lexical_cast<double>(a) < b_int) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int b_int = boost::lexical_cast<int>(b);
        string a_str = boost::lexical_cast<string>(a);
        if (stod(a_str) > b_int) {
            return a;
        }
        else if (stod(a_str) < b_int) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float b_float = boost::lexical_cast<float>(b);
        string a_str = boost::lexical_cast<string>(a);
        if (stod(a_str) > b_float) {
            return a;
        }
        else if (stod(a_str) < b_float) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double b_double = boost::lexical_cast<double>(b);
        string a_str = boost::lexical_cast<string>(a);
        if (stod(a_str) > b_double) {
            return a;
        }
        else if (stod(a_str) < b_double) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        double b_double = boost::lexical_cast<double>(b);
        if (boost::lexical_cast<double>(a) > b_double) {
            return a;
        }
        else if (boost::lexical_cast<double>(a) < b_double) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        string b_str = boost::lexical_cast<string>(b);
        double a_double = boost::lexical_cast<double>(a);
        if (a_double > stod(b_str)) {
            return a;
        }
        else if (a_double < stod(b_str)) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        double a_double = stod(a.convert_to<string>());
        double b_double = stod(b.convert_to<string>());
        if (a_double > b_double) {
            return a;
        }
        else if (a_double < b_double) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else {
        throw invalid_argument("Invalid input");
    }
}