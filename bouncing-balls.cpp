#include <iostream>
#include <cmath>
#include <string>

int main() {
    double start_height, bounciness_index, total_distance = 0.0;
    int num_bounces;
    std::string first_bounce_height;

    std::cin >> start_height;
    std::cin >> first_bounce_height;

    // Replace ',' with '.'
    for (char &c : first_bounce_height) {
        if (c == ',') {
            c = '.';
        }
    }

    std::cin >> num_bounces;

    bounciness_index = std::stod(first_bounce_height) / start_height;

    total_distance = start_height * (1 - pow(bounciness_index, num_bounces)) / (1 - bounciness_index) + std::stod(first_bounce_height) * pow(bounciness_index, num_bounces);

    std::cout << total_distance << std::endl;

    return 0;
}