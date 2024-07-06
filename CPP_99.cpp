#include <string>

using namespace std;

int closest_integer(string value) {
    double num = stod(value);
    int integerPart = (int)num;
    if (abs(num - integerPart) < 0.5) {
        return num > 0 ? integerPart : integerPart + 1;
    } else {
        return (int)round(num);
    }
}