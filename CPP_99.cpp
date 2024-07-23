#include <string>

int closest_integer(string value) {
    double num = stod(value);
    int integer = (num >= 0) ? (int) ceil(num) : (int) floor(num);
    return integer;
}