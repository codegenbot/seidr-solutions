#include <iostream>
#include <cmath>

int main() {
    double start_height, bounce_height, bounciness_index, total_distance;
    int num_bounces;

    std::cin >> start_height >> bounce_height >> num_bounces;

    bounciness_index = bounce_height / start_height;
    total_distance = start_height + (start_height + bounce_height) * (1 / (1 - bounciness_index));

    for (int i = 1; i < num_bounces; ++i) {
        total_distance += (start_height + bounce_height) * std::pow(bounciness_index, i);
    }

    std::cout << total_distance << std::endl;

    return 0;
}