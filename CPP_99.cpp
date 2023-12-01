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
        return num >= 0 ? ceil_num : floor_num;
    }

    return diff_floor < diff_ceil ? floor_num : ceil_num;
}

int main() {
    assert(closest_integer("0") == 0);
    // more test cases...

    return 0;
}