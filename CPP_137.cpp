#include <boost/any.hpp>
#include <string>
#include <iostream>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        if (strA > strB)
            return a;
        else if (strA < strB)
            return b;
        else
            return "None";
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int iA = boost::any_cast<int>(a);
        int iB = boost::any_cast<int>(b);
        if (iA > iB)
            return a;
        else if (iA < iB)
            return b;
        else
            return "None";
    }
    else {
        return "None";
    }
}

int main() {
    boost::any a = "hello";
    boost::any b = "hi";

    boost::any result = compare_one(a, b);

    cout << boost::any_cast<string>(result) << endl;

    return 0;
}