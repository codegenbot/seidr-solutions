#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int ai = boost::any_cast<int>(a);
        float bf = boost::any_cast<float>(b);
        return (ai > bf) ? a : ((bf > ai) ? b : boost::any(typeid(string), "None"));
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int ai = boost::any_cast<int>(a);
        string bs = boost::any_cast<string>(b);
        return (stoi(bs) > ai) ? b : ((ai > stoi(bs)) ? a : boost::any(typeid(string), "None"));
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float af = boost::any_cast<float>(a);
        string bs = boost::any_cast<string>(b);
        return (stof(bs) > af) ? b : ((af > stof(bs)) ? a : boost::any(typeid(string), "None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string as = boost::any_cast<string>(a);
        int bi = boost::any_cast<int>(b);
        return (stof(as) > bi) ? a : ((bi > stof(as)) ? b : boost::any(typeid(string), "None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string as = boost::any_cast<string>(a);
        float bf = boost::any_cast<float>(b);
        return (stof(as) > bf) ? a : ((bf > stof(as)) ? b : boost::any(typeid(string), "None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string as = boost::any_cast<string>(a);
        string bs = boost::any_cast<string>(b);
        return (stof(as) > stof(bs)) ? a : ((stof(bs) > stof(as)) ? b : boost::any(typeid(string), "None"));
    }
    return a;
}

int main() {
    // Input from user
    int num1, num2;
    string str1, str2;
    char choice;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number (integer or float): ";
    cin >> num2;

    if (num2 == 0) {
        cout << "Please enter a non-zero value.\n";
        return 0;
    }

    // Check if the user wants to compare strings
    cout << "Do you want to compare strings? (y/n): ";
    cin >> choice;

    if (choice == 'y') {
        cout << "Enter the first string: ";
        getline(cin, str1);

        cout << "Enter the second string: ";
        getline(cin, str2);

        boost::any result = compare_one(boost::any(typeid(int), num1), boost::any(typeid(float), num2));
        if (result.type() == typeid(string)) {
            cout << result.convert_to<string>() << endl;
        } else {
            cout << "None" << endl;
        }
    }

    return 0;
}