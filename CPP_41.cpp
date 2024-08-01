#include <iostream>

int car_race_collision(int n) {
    return n * (n - 1) / 2;
}

int main() {
    int n;
    std::cout << "Enter the number of cars: ";
    std::cin >> n;
  
    int collisions = car_race_collision(n);

    std::cout << "Number of collisions: " << collisions << std::endl;

    return 0;
}