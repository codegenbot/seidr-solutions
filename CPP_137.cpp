#include <iostream>
#include <string>

using namespace std;

bool compare_one(int a, double b) {
    if (a > b) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int a;
    double b;
    cout << "Enter an integer: ";
    cin >> a;
    cout << "Enter a real number: ";
    cin >> b;

    if (compare_one(a, b)) {
        cout << "The integer is greater." << endl;
    }
    else {
        cout << "The real number is not less than the integer." << endl;
    }

    return 0;
}