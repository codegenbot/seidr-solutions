#include <iostream>
#include <string>
using namespace std;

int compare_one(string a, string b) {
    if (a.compare(b) > 0) {
        return 1;
    } else if (a.compare(b) == 0) {
        return 0;
    } else {
        return -1;
    }
}

int main() {
    cout << "Enter two strings: ";
    string a, b;
    cin >> a >> b;
    int result = compare_one(a, b);
    if (result > 0) {
        cout << a << " is greater than " << b << endl;
    } else if (result == 0) {
        cout << a << " and " << b << " are equal." << endl;
    } else {
        cout << a << " is less than " << b << endl;
    }
    return 0;
}
