#include <cmath>

float truncate_number(float number) {
    int integerPart = (int)number;
    float fractionalPart = std::abs(number - integerPart);
    if (fractionalPart >= 0.5) {
        return integerPart + (fractionalPart > 0 ? -1 : 1);
    }
    return integerPart - fractionalPart;
}