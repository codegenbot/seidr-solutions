#include <iostream>
#include <cmath>

int main() {
    double start_height, first_bounce_height, bounciness_index;
    int num_bounces;
    std::cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;

    double total_distance = 0.0;
    for (int i = 0; i < num_bounces; ++i) {
        total_distance += 2 * (first_bounce_height * bounciness_index) * pow(bounciness_index, i);
    }

    total_distance += start_height; // Add the initial drop height

    std::cout << total_distance << std::endl;

    return 0;
}