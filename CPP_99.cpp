#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int closest_integer(string value) {
    double number = stod(value);
    int floorNumber = floor(number);
    int ceilNumber = ceil(number);

    if (number - floorNumber < ceilNumber - number) {
        return floorNumber;
    } else {
        return ceilNumber;
    }
}

int main() {
    string value;
    cout << "Enter a number: ";
    cin >> value;
    cout << closest_integer(value) << endl;
    return 0;
}