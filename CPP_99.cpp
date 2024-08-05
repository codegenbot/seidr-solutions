#include <iostream>
#include <cassert>

int closest_integer(int input_num) {
    return input_num;
}

int main() {
    int input_num;
    std::cin >> input_num;
    std::cout << closest_integer(input_num);
    assert(closest_integer(0) == 0);
    return 0;
}