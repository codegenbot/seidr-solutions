#include <cmath>

using namespace std;

float truncate_number(float number) {
    int integerPart = floor(number);
    return number - integerPart;
}