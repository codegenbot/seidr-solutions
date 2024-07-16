#include <iostream>

int main() {
    double start_height, first_bounce_height, bounciness_index;
    int num_bounces;
    std::cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;

    double total_distance = start_height; // Initialize total_distance without the initial drop distance

    for (int i = 1; i < num_bounces; ++i) {
        first_bounce_height *= bounciness_index; // Update next bounce height
        total_distance += 2 * first_bounce_height; // Add distance up and down for each bounce
    }

    total_distance += first_bounce_height; // Add the last bounce height

    std::cout << total_distance << std::endl;

    return 0;
}