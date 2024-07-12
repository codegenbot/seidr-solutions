#include <iostream>
#include <cmath>

int main() {
    double start_height, bounciness_index, total_distance = 0.0, first_bounce_height;
    int num_bounces;

    std::cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;

    total_distance = start_height * (1 - pow(bounciness_index, (double)num_bounces)) / (1 - bounciness_index);

    std::cout << total_distance << std::endl;

    return 0;
}