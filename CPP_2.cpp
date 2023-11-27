#include <cmath>
#include <cassert>

float truncate_number(float number){
    return number - std::floor(number);
}

int test() {
    assert(std::abs(truncate_number(123.456) - 0.456) < 1e-4);

    return 0;
}

int main() {
    return test();
}