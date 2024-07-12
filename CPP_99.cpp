#include <string>

int closest_integer(std::string value) {
    double num = stod(value);
    int integer = static_cast<int>(num);

    if (abs(num - integer) > abs(num - (integer + 1))) {
        return integer + 1;
    } else {
        return integer;
    }
}