#include <iostream>
#include <cmath>

int main() {
    double start_height, bounciness_index, total_distance = 0.0, num_bounces;
    int first_bounce_height;

    std::cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = static_cast<double>(first_bounce_height) / start_height;

    total_distance = start_height + first_bounce_height * (2 + 2 * bounciness_index) * (1 - pow(bounciness_index, num_bounces - 1)) / (1 - bounciness_index);

    std::cout << total_distance << std::endl;

    return 0;
}