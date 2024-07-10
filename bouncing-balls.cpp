#include <iostream>

int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance = 0.0;
    double num_bounces;

    std::cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;
    total_distance = start_height + first_bounce_height;

    for (double i = 2.0; i < num_bounces; i++) {
        total_distance += 2 * first_bounce_height;
        first_bounce_height *= bounciness_index;
    }

    std::cout << total_distance << std::endl;

    return 0;
}