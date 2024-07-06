#include <string>

int closest_integer(std::string value) {
    double num = stod(value);
    int integer = lround(num);
    
    if (abs(num - integer) == abs(num - (integer + 1))) {
        return integer + (num > integer ? 1 : -1);
    }
    
    return integer;
}