#include <iostream>
#include <cmath>

double calculateTotalDistance() {
    int start_height, height_after_bounce, num_bounces;
    std::cin >> start_height >> height_after_bounce >> num_bounces;

    double bounciness_index = static_cast<double>(height_after_bounce) / start_height;
    double total_distance = start_height + height_after_bounce;

    for (int i = 2; i <= num_bounces; ++i) {
        total_distance += 2 * start_height * std::pow(bounciness_index, i - 1);
    }

    return total_distance;
}