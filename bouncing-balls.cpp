#include <iostream>
#include <cmath>

int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance;
    int num_bounces;

    std::cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;
    total_distance = start_height + first_bounce_height;

    for (int i = 2; i <= num_bounces; ++i) {
        double bounce_height = first_bounce_height * std::pow(bounciness_index, i - 1);
        total_distance += 2 * bounce_height;
    }

    std::cout << total_distance << std::endl;

    return 0;
}