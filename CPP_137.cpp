#include <iostream>
#include <string>

using namespace std;

bool compare(int a, int b) {
    if (a > b) return true;
    else if (b > a) return false;
    else return false; 
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