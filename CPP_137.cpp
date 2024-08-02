#include <boost/any.hpp>
#include <string>
#include <iostream>
#include <limits>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (boost::any_cast<int>(a) > boost::any_cast<float>(b)) ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (boost::any_cast<float>(a) > boost::any_cast<int>(b)) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float fa = stof(boost::any_cast<string>(a));
        return (fa > boost::any_cast<float>(b)) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float fb = stof(boost::any_cast<string>(b));
        return (boost::any_cast<float>(a) > fb) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);
        return (stof(sa) > stof(sb)) ? a : b;
    }
    return boost::any("None");
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    boost::any any1 = num1;
    boost::any any2 = num2;

    boost::any result = compare_one(any1, any2);

    if (result.type() == typeid(string)) {
        cout << "Result: " << boost::any_cast<string>(result) << endl;
    }
    else {
        cout << "Result: " << boost::any_cast<int>(result) << endl;
    }

    return 0;
}