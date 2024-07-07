#include <string>
#include <cmath>

int closest_integer(double num) {
    int integer = static_cast<int>(num);
    if (abs(num - integer) > abs(num - (integer + 1))) {
        return integer + 1;
    } else {
        return integer;
    }
}

int main() {
    assert(closest_integer(0.5) == 0);
    return 0;
}