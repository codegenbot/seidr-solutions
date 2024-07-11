#include <iostream>
#include <cmath>
#include <algorithm>
#include <limits>

int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance = 0.0;
    int num_bounces;

    std::cin >> start_height;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin >> first_bounce_height;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin >> num_bounces;

    bounciness_index = first_bounce_height / start_height;

    total_distance = start_height * (1 - pow(bounciness_index, num_bounces)) / (1 - bounciness_index) + first_bounce_height * pow(bounciness_index, num_bounces);

    std::cout.precision(17);
    std::cout << total_distance << std::endl;

    return 0;
}