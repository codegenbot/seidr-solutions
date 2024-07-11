#include<stdio.h>
#include<math.h>
#include<string>
using namespace std;

int closest_integer(string value) {
    double num = stod(value);
    int integerPart = (int)num;
    if (abs(num - integerPart) < 0.5) {
        return integerPart;
    } else if (num > integerPart) {
        return integerPart + 1;
    } else {
        return integerPart - 1;
    }
}