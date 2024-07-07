#include <iostream>
using namespace std;

int closest_integer(double num) {
    int integer = static_cast<int>(num);
    if (abs(num - integer) > abs(num - (integer + 1))) {
        return integer + 1;
    } else {
        return integer;
    }
}

int main() {
    double num;
    cout << "Enter a number: ";
    cin >> num;
    if(num == 0) {
        cout << "The closest integer is: " << 0 << endl;
    } else {
        cout << "The closest integer is: " << closest_integer(num) << endl;
    }
    return 0;
}