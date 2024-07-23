#include <iostream>
#include <cmath>

int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance;
    int num_bounces;

    std::cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;
    if (bounciness_index >= 1.0) {
        total_distance = start_height + first_bounce_height;
    }
    else {
        total_distance = start_height;
        total_distance += first_bounce_height * (1 + std::pow(bounciness_index, num_bounces)) / (1 - bounciness_index);
    }

    std::cout << total_distance << std::endl;

    return 0;
}