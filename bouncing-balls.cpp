#include <iostream>

int main() {
    double start_height, first_bounce_height, bounciness_index, reduction_factor = 1.0;
    int num_bounces;
    std::cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;

    double total_distance = start_height + first_bounce_height; // Include the initial drop distance

    for (int i = 2; i <= num_bounces; ++i) {
        reduction_factor *= bounciness_index; // Update reduction factor for next bounce
        first_bounce_height *= reduction_factor; // Update next bounce height
        total_distance += (first_bounce_height * (1 + bounciness_index)); // Add distance up and down for each bounce
    }

    std::cout << total_distance << std::endl;

    return 0;
}