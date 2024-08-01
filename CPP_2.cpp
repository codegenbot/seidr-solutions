#include <cmath>

using namespace std;

float truncate_number(float number) {
    int integer_part = (int)number;
    float decimal_part = fmod(number, 1);
    return decimal_part;
}