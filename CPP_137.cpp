#include <iostream>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (holds_alternative<int>(a) && holds_alternative<double>(b)) {
        return get<int>(a) > static_cast<double>(get<int>(b)) ? a : b;
    }
    else if (holds_alternative<double>(a) && holds_alternative<int>(b)) {
        return get<double>(a) > static_cast<int>(get<double>(b)) ? a : b;
    }
    return boost::none; // or throw an exception
}

int main() {
    boost::any a = 5;
    boost::any b = 3.0;
    boost::any result = compare_one(a, b);
    
    if (holds_alternative<int>(result)) {
        cout << "The number is greater." << endl;
    }
    else if (holds_alternative<double>(result)) {
        cout << "The double is greater." << endl;
    }
    return 0;
}