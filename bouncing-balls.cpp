#include <iostream>
#include <cmath>

int main() {
    int num_bounces, first_bounce_height;
    double bounciness_index, total_distance = 0.0;

    std::cin >> first_bounce_height >> bounciness_index >> num_bounces;

    for (int i = 2; i <= num_bounces; ++i) {
        total_distance += 2 * first_bounce_height * std::pow(bounciness_index, i) * (1 + bounciness_index) * (1 + bounciness_index);
    }

    std::cout << total_distance << std::endl;

    return 0;
}