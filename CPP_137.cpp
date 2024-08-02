#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        if (str1 > str2)
            return a;
        else if (str1 < str2)
            return b;
        else
            return a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int i = boost::any_cast<int>(a);
        int j = boost::any_cast<int>(b);
        if (i > j)
            return a;
        else if (i < j)
            return b;
        else
            return a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float f1 = boost::any_cast<float>(a);
        float f2 = boost::any_cast<float>(b);
        if (f1 > f2)
            return a;
        else if (f1 < f2)
            return b;
        else
            return a;
    }
    else {
        return b;
    }
}

int main() {
    boost::any a = 10; // any number
    boost::any b = "hello"; // any string

    boost::any result = compare_one(a, b);

    if (result.type() == typeid(string)) {
        cout << "The result is: " << boost::any_cast<string>(result) << endl;
    }
    else {
        cout << "The result is: " << boost::any_cast<int>(result) << endl;
    }

    return 0;
}