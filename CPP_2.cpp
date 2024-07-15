#include <cmath> // for floor function

double truncate_number(double number) {
    return number - std::floor(number);
}