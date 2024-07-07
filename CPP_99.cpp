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
    cin >> num;
    cout << closest_integer(num);
    return 0;
}