#include <iostream>
#include <cmath>

int main() {
    std::string start_height_str, first_bounce_height_str, num_bounces_str;
    std::cin >> start_height_str;
    std::cin >> first_bounce_height_str;
    std::cin >> num_bounces_str;

    start_height_str.replace(start_height_str.find(','), 1, ".");
    first_bounce_height_str.replace(first_bounce_height_str.find(','), 1, ".");
    num_bounces_str.replace(num_bounces_str.find(','), 1, ".");

    double start_height = std::stod(start_height_str);
    double first_bounce_height = std::stod(first_bounce_height_str);
    double num_bounces = std::stod(num_bounces_str);

    double bounciness_index, total_distance = 0.0;

    bounciness_index = first_bounce_height / start_height;

    if (bounciness_index >= 1) {
        total_distance = start_height + first_bounce_height * num_bounces;
    } else {
        total_distance = start_height + first_bounce_height * ((1 - pow(bounciness_index, num_bounces + 1)) / (1 - bounciness_index));
    }

    std::cout << total_distance << std::endl;

    return 0;
}