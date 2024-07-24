#include <iostream>
#include <cmath>

int main() {
    int num_bounces;
    double first_bounce_height, bounciness_index, total_distance = 0;

    // Read input values
    std::cin >> num_bounces >> first_bounce_height >> bounciness_index;

    // Calculate total distance
    for (int i = 2; i <= num_bounces; ++i) {
         total_distance += 2 * first_bounce_height * std::pow(bounciness_index, i) * (1 + bounciness_index) * (1 + bounciness_index);
    }

    // Output total_distance
    std::cout << total_distance << std::endl;

    return 0;
}