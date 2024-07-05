#include <iostream>
#include <cmath>
using namespace std;

float truncate_number(float number) {
    return trunc(number);
}

int main() {
    float number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Truncated number: " << truncate_number(number) << endl;
    return 0;
}