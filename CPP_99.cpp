#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;

int closest_integer(string value) {
    double num = stod(value);
    int integer = static_cast<int>(num);
    double diff1 = num - integer;
    double diff2 = ceil(num) - num;
    if (diff1 < diff2) {
        return integer;
    } else {
        return static_cast<int>(ceil(num));
    }
}