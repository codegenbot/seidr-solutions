#include <iostream>

int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance;
    int num_bounces;

    std::cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;
    total_distance = start_height + first_bounce_height;

    total_distance += first_bounce_height * (2 + num_bounces - 1) * 0.5;

    std::cout << total_distance << std::endl;

    return 0;
}