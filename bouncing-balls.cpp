#include <iostream>
#include <cmath>

int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance = 0.0;
    int num_bounces;

    std::cin >> start_height;
    std::cin.ignore(256, '\n'); 
    std::cin >> first_bounce_height;
    first_bounce_height = std::stod(std::to_string(first_bounce_height).replace(first_bounce_height.find(','), 1, "."));
    std::cin.ignore(256, '\n'); 
    std::cin >> num_bounces;

    bounciness_index = first_bounce_height / start_height;

    total_distance = start_height * (1 - pow(bounciness_index, num_bounces)) / (1 - bounciness_index) + first_bounce_height * pow(bounciness_index, num_bounces);

    std::cout << total_distance << std::endl;

    return 0;
}