#include <cmath>

using namespace std;

float truncate_number(float number) {
    int intPart = (int)number;
    return number - intPart;
}