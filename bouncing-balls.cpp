#include <iostream>
#include <cmath>

int main() {
    double start_height, first_bounce_height, bounciness_index;
    int num_bounces;
    std::cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;

    double total_distance = start_height;
    for (int i = 0; i < num_bounces; ++i) {
        total_distance += 2 * first_bounce_height; // Add distance up and down
        first_bounce_height *= bounciness_index; // Update next bounce height
    }

    std::cout << std::fixed << total_distance << std::endl; // Output with fixed precision

    return 0;
}