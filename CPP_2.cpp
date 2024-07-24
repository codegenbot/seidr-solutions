#include <cmath>
#include <cassert>

double truncate_number(double number) {
    return floor(number * 100) / 100;
}

double round_number(double number) {
    return round(number * 100) / 100;
}

double ceil_number(double number) {
    return ceil(number * 100) / 100;
}

double floor_number(double number) {
    return floor(number * 100) / 100;
}

double abs_number(double number) {
    return fabs(number);
}