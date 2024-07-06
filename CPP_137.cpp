#include <boost/any.hpp>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>

using boost::any_cast;
using namespace std;

string compare_one(any a, any b) {
    if (any_cast< int >(a).type() == typeid(int) && any_cast< double >(b).type() == typeid(double)) {
        return any_cast<string>(to_string(any_cast<int>(a)) > to_string(any_cast<double>(b)));
    } else if (any_cast< double >(a).type() == typeid(double) && any_cast< int >(b).type() == typeid(int)) {
        return any_cast<string>(to_string(any_cast<double>(a)) > to_string(any_cast<int>(b)));
    } else if (any_cast< string >(a).type() == typeid(string) && any_cast< double >(b).type() == typeid(double)) {
        string da = any_cast<string>(a);
        string db = to_string(any_cast<double>(b));
        return lexicographical_compare(da.begin(), da.end(),
            db.begin(), db.end()) ? a : b;
    } else if (any_cast< double >(a).type() == typeid(double) && any_cast< string >(b).type() == typeid(string)) {
        string da = to_string(any_cast<double>(a));
        string db = any_cast<string>(b);
        return lexicographical_compare(da.begin(), da.end(),
            db.begin(), db.end()) ? a : b;
    } else if (any_cast< string >(a).type() == typeid(string) && any_cast< int >(b).type() == typeid(int)) {
        string da = any_cast<string>(a);
        int db = any_cast<int>(b);
        return lexicographical_compare(da.begin(), da.end(),
            to_string(db).begin(), to_string(db).end()) ? a : b;
    } else if (any_cast< int >(a).type() == typeid(int) && any_cast< string >(b).type() == typeid(string)) {
        int da = any_cast<int>(a);
        string db = any_cast<string>(b);
        return lexicographical_compare(to_string(da).begin(), to_string(da).end(),
            db.begin(), db.end()) ? a : b;
    }
    return "None";
}