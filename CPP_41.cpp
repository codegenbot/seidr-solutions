#include <iostream>

int car_race_collision(int n) {
    return n * (n - 1) / 2;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << car_race_collision(n) << std::endl;
    return 0;
}