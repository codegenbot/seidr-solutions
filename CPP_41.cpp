```cpp
#include <iostream>

int car_race_collision(int n) {
    int collisions = (n * (n - 1)) / 2;
    return collisions;
}

int main() {
    int n;
    std::cout << "Enter the number of cars: ";
    std::cin >> n;
    std::cout << "Number of collisions: " << car_race_collision(n) << std::endl;
    return 0;
}