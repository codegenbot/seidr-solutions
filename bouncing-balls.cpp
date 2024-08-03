#include <iostream>
#include <cmath>

double calculateTotalDistance() {
    double start_height, height_after_bounce, total_distance = 0, bounciness_index;
    int num_bounces;

    std::cin >> start_height >> height_after_bounce >> num_bounces;
    bounciness_index = height_after_bounce / start_height;

    for (int i = 2; i <= num_bounces; ++i) {
        total_distance += 2 * start_height * std::pow(bounciness_index, i - 1);
    }

    return total_distance;
}