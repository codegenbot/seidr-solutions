#include <iostream>
#include <cmath>

double calculateDistance(int num_bounces, double start_height, double bounciness_index) {
    double total_distance = start_height;
    for (int i = 2; i <= num_bounces; ++i) {
        total_distance += 2 * start_height * std::pow(bounciness_index, i - 1);
    }
    return total_distance;
}

int main() {
    int num_bounces;
    double start_height, bounciness_index;

    std::cout << "Enter the number of bounces: ";
    std::cin >> num_bounces;
    
    std::cout << "Enter the starting height: ";
    std::cin >> start_height;
    
    std::cout << "Enter the bounciness index: ";
    std::cin >> bounciness_index;

    double total_distance = calculateDistance(num_bounces, start_height, bounciness_index);
    
    std::cout << "Total distance traveled: " << total_distance << std::endl;

    return 0;
}