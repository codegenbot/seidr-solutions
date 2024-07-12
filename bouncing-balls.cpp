#include <iostream>
#include <cmath>
#include <sstream>

int main() {
    double start_height, bounciness_index, total_distance = 0.0;
    int num_bounces;
    double first_bounce_height;

    std::string input;
    std::getline(std::cin, input);
    std::replace(input.begin(), input.end(), ',', '.');
    std::stringstream(input) >> start_height;

    std::getline(std::cin, input);
    std::replace(input.begin(), input.end(), ',', '.');
    std::stringstream(input) >> first_bounce_height;

    std::cin >> num_bounces;

    bounciness_index = first_bounce_height / start_height;

    total_distance = start_height + first_bounce_height * (1 - pow(bounciness_index, num_bounces + 1)) / (1 - bounciness_index);

    std::cout << total_distance << std::endl;

    return 0;
}