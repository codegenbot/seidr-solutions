#include <iostream>
#include <cmath>

int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance;
    int num_bounces;

    std::cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;
    total_distance = 2 * start_height * (1 - std::pow(bounciness_index, num_bounces + 1)) / (1 - bounciness_index);

    std::cout << total_distance << std::endl;

    return 0;
}