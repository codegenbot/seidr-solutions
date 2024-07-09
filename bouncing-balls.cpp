#include <iostream>

int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance;
    int num_bounces;

    std::cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;
    total_distance = start_height + first_bounce_height;

    double current_height = first_bounce_height;
    for (int i = 2; i <= num_bounces; i++) {
        current_height *= bounciness_index;
        total_distance += 2 * current_height;
    }

    std::cout << total_distance << std::endl;

    return 0;
}