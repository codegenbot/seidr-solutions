#include <iostream>

int main() {
    double start_height, first_bounce_height, bounciness_index;
    int num_bounces;
    double reduction_factor = 1.0;
    std::cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;

    double total_distance = start_height + first_bounce_height; // Include the initial drop distance

    for (int i = 2; i <= num_bounces; ++i) {
        first_bounce_height *= bounciness_index; // Update next bounce height
        reduction_factor *= bounciness_index; // Update reduction factor
        total_distance += first_bounce_height * (1 + bounciness_index) * 2; // Add distance up and down for each bounce considering the reduction factor
    }

    std::cout << total_distance << std::endl;

    return 0;
}