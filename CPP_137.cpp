#include<iostream>
#include<sstream>
#include<algorithm>
#include<boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = boost::any_cast<int>(a);
        int num2 = boost::any_cast<int>(b);
        if (num1 > num2) {
            return num1;
        }
        else if (num2 > num1) {
            return num2;
        }
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float num1 = boost::any_cast<float>(a);
        float num2 = boost::any_cast<float>(b);
        if (num1 > num2) {
            return num1;
        }
        else if (num2 > num1) {
            return num2;
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        replace(str1.begin(), str1.end(), ',', '.');
        replace(str2.begin(), str2.end(), ',', '.');
        istringstream iss1(str1);
        istringstream iss2(str2);
        float num1, num2;
        iss1 >> num1;
        iss2 >> num2;
        if (num1 > num2) {
            return str1;
        }
        else if (num2 > num1) {
            return str2;
        }
    }
    return "None";
}

int main() {
    cout << boost::any_cast<float>(compare_one(1, 2.5)) << endl;
    cout << boost::any_cast<string>(compare_one(1, "2,3")) << endl;
    cout << boost::any_cast<string>(compare_one("5,1", "6")) << endl;
    cout << boost::any_cast<string>(compare_one("1", 1)) << endl;
    return 0;
}