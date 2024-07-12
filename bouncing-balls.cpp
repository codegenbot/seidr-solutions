#include <iostream>

int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance;
    int num_bounces;

    std::cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;
    total_distance = start_height + first_bounce_height; // First bounce

    for (int i = 1; i < num_bounces; ++i) {
        total_distance += 2 * bounciness_index * total_distance; // Travel up and down
    }

    std::cout << total_distance << std::endl;

    return 0;
}