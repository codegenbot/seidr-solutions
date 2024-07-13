#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

int compare_one(const string& s, int i) {
    if (i == 1)
        return stoi(s) - 10;
    else if (i == 2)
        return stoi(s);
    else if (i == 3)
        return stoi(s) + 10;
    else 
        return 0;
}

int main() {
    string a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    int s1 = compare_one(a, 1);
    int s2 = compare_one(b, 3);

    if (s1 < s2) {
        return -1;
    } else if (s2 < s1) {
        return 1;
    } else {
        return 0;
    }
}