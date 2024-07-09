#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (int)b ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);

        int pos1 = str1.find(',');
        int pos2 = str2.find(',');

        double num1 = stod(str1.substr(0, pos1));
        double num2 = stod(str2.substr(0, pos2));

        return (num1 > num2 ? a : b);
    } else if (a.type() == typeid(string) && b.type() != typeid(string)) {
        string str = any_cast<string>(a);

        int pos = str.find(',');
        double num = stod(str.substr(0, pos));

        if ((int)b > num || (float)b > num)
            return b;
        else
            return "None";
    } else if (b.type() == typeid(string) && a.type() != typeid(string)) {
        string str = any_cast<string>(b);

        int pos = str.find(',');
        double num = stod(str.substr(0, pos));

        if ((int)a > num || (float)a > num)
            return a;
        else
            return "None";
    } else {
        return "None";
    }
}

int main() {
    boost::any a = 1;
    boost::any b = 2.5;

    cout << any_cast<boost::any>(compare_one(a, b)) << endl;

    return 0;
}