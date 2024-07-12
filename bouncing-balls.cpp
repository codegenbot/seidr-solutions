#include <iostream>
#include <cmath>

int main() {
    double start_height, bounciness_index, total_distance = 0.0;
    double num_bounces;
    double first_bounce_height;

    std::cin >> start_height;
    std::cin >> first_bounce_height;
    std::cin >> num_bounces;

    if (start_height <= 0 || first_bounce_height <= 0 || num_bounces < 0) {
        std::cout << "Invalid input. Please provide positive values for start height, first bounce height, and a non-negative value for number of bounces." << std::endl;
        return 1;
    }

    bounciness_index = first_bounce_height / start_height;

    if (bounciness_index >= 1) {
        std::cout << "Invalid input. Bounciness index must be less than 1." << std::endl;
        return 1;
    }

    total_distance = start_height + first_bounce_height * (1 - pow(bounciness_index, num_bounces + 1)) / (1 - bounciness_index);

    std::cout << total_distance << std::endl;

    return 0;
}