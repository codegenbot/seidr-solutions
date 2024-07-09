#include <cmath>

using namespace std;

float truncate_number(float number) {
    int integer_part = (int)number;
    return fmod(number, 1);
}