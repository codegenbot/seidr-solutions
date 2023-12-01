#include <iostream>
#include <cmath>
#include <cassert>
using namespace std;

int closest_integer(string value) {
    float num = stof(value);
    int floor_num = floor(num);
    int ceil_num = ceil(num);

    float diff_floor = abs(num - floor_num);
    float diff_ceil = abs(num - ceil_num);

    if (diff_floor == diff_ceil) {
        if (num > 0) {
            return ceil_num;
        } else {
            return floor_num;
        }
    }

    if (diff_floor < diff_ceil) {
        return floor_num;
    } else {
        return ceil_num;
    }
}

int closest_integer_main() {
    assert(closest_integer("0") == 0);
    assert(closest_integer("3.14") == 3);
    assert(closest_integer("-2.5") == -2);
    assert(closest_integer("5.8") == 6);
    assert(closest_integer("10.5") == 11);
    assert(closest_integer("-7.2") == -7);

    return 0;
}