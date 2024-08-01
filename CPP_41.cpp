#include <iostream>
#include <cassert>

int car_race_collision(int n) {
    return n * (n + 1) / 2;
}

int main() {
    assert(car_race_collision(10) == 55);
    int n;
    std::cin >> n;
    std::cout << car_race_collision(n) << std::endl;
    return 0;
}