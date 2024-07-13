#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max(a.convert_to<int>(), b.convert_to<float>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return max(a.convert_to<float>(), b.convert_to<int>());
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = a.convert_to<string>();
        string str2 = b.convert_to<string>();

        int num1 = stoi(str1.substr(0, str1.find(',')));
        int num2 = stoi(str2.substr(0, str2.find(',')));

        if (num1 > num2) return a;
        else if (num1 < num2) return b;
        else return boost::any("None");
    }
    else if (a.type() == typeid(string)) {
        string str = a.convert_to<string>();
        int num = stoi(str.substr(0, str.find(',')));

        if (b.type() == typeid(int)) {
            if (num > b.convert_to<int>()) return a;
            else if (num < b.convert_to<int>()) return b;
            else return boost::any("None");
        }
        else if (b.type() == typeid(float)) {
            if (num > b.convert_to<float>()) return a;
            else if (num < b.convert_to<float>()) return b;
            else return boost::any("None");
        }
    }
    else if (a.type() == typeid(int)) {
        int num = a.convert_to<int>();

        if (b.type() == typeid(string)) {
            string str = b.convert_to<string>();
            int num2 = stoi(str.substr(0, str.find(',')));

            if (num > num2) return a;
            else if (num < num2) return b;
            else return boost::any("None");
        }
        else if (b.type() == typeid(float)) {
            if (num > b.convert_to<float>()) return a;
            else if (num < b.convert_to<float>()) return b;
            else return boost::any("None");
        }
    }

    return boost::any();
}