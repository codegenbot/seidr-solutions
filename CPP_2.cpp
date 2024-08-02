#include <cmath>

using namespace std;

float truncate_number(float number) {
    int integerPart = (int)number;
    return number - static_cast<float>(integerPart);
}