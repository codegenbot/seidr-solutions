#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (boost::any_cast<int>(a) > static_cast<float>(boost::any_cast<double>(b))) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (static_cast<float>(boost::any_cast<double>(a)) > boost::any_cast<int>(b)) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        return str1.compare(str2) > 0 ? a : b;
    }
    else {
        return "None";
    }
}

int main() {
    // test the function
    boost::any a = 5; // int
    boost::any b = 3.5; // float
    boost::any result = compare_one(a, b);
    
    if (result.type() == typeid(string)) {
        cout << "Result: " << boost::any_cast<string>(result) << endl;
    }
    else {
        cout << "Result: " << boost::any_cast<int>(result) << endl;
    }
    return 0;
}