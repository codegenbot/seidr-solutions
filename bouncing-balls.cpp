#include <iostream>

int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance;
    int num_bounces;

    std::cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;
    total_distance = start_height;

    for (int i = 0; i < num_bounces; ++i) {
        total_distance += first_bounce_height * 2; // Add the vertical movement and return bounce
        first_bounce_height *= bounciness_index;
    }

    // Update the total_distance calculation for the initial drop
    total_distance -= first_bounce_height;

    std::cout << total_distance << std::endl;

    return 0;
}