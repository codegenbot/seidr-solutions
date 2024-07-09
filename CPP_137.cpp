#include <iostream>
#include <string>

using namespace std;

bool compare(int a, int b) {
    if (a > b) return true;
    else if (b > a) return false;
    else return false; // or return true, depending on your needs
}

bool compareString(string a, string b) {
    if (stoi(a) > stoi(b)) return true;
    else if (stoi(b) > stoi(a)) return false;
    else return false; // or return true, depending on your needs
}

int main() {
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    if (compare(a, b)) {
        cout << "The larger number is: " << a << endl;
    }
    else if (!compare(b, a)) {
        cout << "The larger number is: " << b << endl;
    }
    else {
        cout << "Both numbers are equal." << endl;
    }

    return 0;
}