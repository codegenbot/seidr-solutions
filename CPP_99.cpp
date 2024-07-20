#include <string>
#include <cmath>

using namespace std;

int closest_integer(string value) {
    double num = stod(value);
    int integerPart = (int)num;
    if (abs(num - integerPart) > 0.5) {
        if (num > 0)
            return integerPart + 1;
        else
            return integerPart - 1;
    } else {
        return integerPart;
    }
}