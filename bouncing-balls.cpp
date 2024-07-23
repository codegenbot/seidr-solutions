#include <iostream>
#include <cmath>

int main() {
    double start_height, bounce_height, total_distance = 0, bounciness_index;
    int num_bounces;

    std::cin >> start_height >> bounce_height >> num_bounces;

    bounciness_index = bounce_height / start_height;

    total_distance = start_height + bounce_height;
    for (int i = 2; i <= num_bounces; ++i) {
        total_distance += bounce_height * std::pow(bounciness_index, i);
    }

    std::cout << total_distance << std::endl;

    return 0;
}