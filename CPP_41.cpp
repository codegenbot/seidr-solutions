#include <iostream>
#include <cassert>

int car_race_collision(int n) {
    return n * (n + 1) / 2;
}

int solve_problem() {
    int n;
    std::cout << "Enter the number of cars: ";
    std::cin >> n;

    std::cout << "Total number of collisions: " << car_race_collision(n) << std::endl;
    
    return 0;
}