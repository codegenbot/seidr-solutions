#include <iostream>

int main() {
    double start_height, first_bounce_height, bounciness_index;
    int num_bounces;
    std::cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;

    double total_distance = 2 * start_height; // Include the initial drop distance

    for (int i = 1; i < num_bounces; ++i) {
        first_bounce_height *= bounciness_index; // Update next bounce height
        total_distance += 2 * first_bounce_height; // Include distance up and down for each bounce
    }

    std::cout << total_distance << std::endl;

    return 0;
}