#include <iostream>
#include <cmath>

int main() {
    long double start_height, first_bounce_height, bounciness_index, total_distance;
    int num_bounces;

    std::cin >> start_height >> first_bounce_height >> num_bounces;
    std::cout.precision(17);

    bounciness_index = first_bounce_height / start_height;

    total_distance = start_height + first_bounce_height * (1 - std::pow(bounciness_index, static_cast<long double>(num_bounces))) / (1 - bounciness_index);

    std::cout << total_distance;

    return 0;
}