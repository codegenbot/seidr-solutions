#include <iostream>
#include <cmath>
#include <string>
#include <cassert>

using namespace std;

int closest_integer(string value){
    double num = stod(value);
    int floor_num = floor(num);
    int ceil_num = ceil(num);
    if (fabs(num - floor_num) < fabs(num - ceil_num)) {
        return floor_num;
    } else {
        return ceil_num;
    }
}

int main() {
    assert (closest_integer("0") == 0);
    assert (closest_integer("3.14") == 3);
    assert (closest_integer("-2.5") == -3);
    assert (closest_integer("5.7") == 6);
    assert (closest_integer("-8.2") == -8);
    return 0;
}