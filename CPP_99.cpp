Here is the completed code:

#include <string>
using namespace std;

int closest_integer(string value) {
    double num = stod(value);
    int integerPart = (int)num;
    if (fabs(num - integerPart) < 0.5) {
        return abs(num) > integerPart ? integerPart + (num > 0 ? 1 : -1) : integerPart;
    } else {
        return num > 0 ? (int)ceil(num) : (int)floor(num);
    }
}