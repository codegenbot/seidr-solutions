#include<string>
using namespace std;

int closest_integer(string value) {
    double num = stod(value);
    int integerPart = (int)num;
    return abs(num - integerPart) < 0.5 ? integerPart : (num > 0) ? integerPart + 1 : integerPart - 1;
}