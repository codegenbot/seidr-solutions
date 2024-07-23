#include <iostream>

int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance;
    int num_bounces;

    std::cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;
    total_distance = start_height;

    for (int i = 0; i < num_bounces; ++i) {
        total_distance += first_bounce_height;
        first_bounce_height *= bounciness_index;
        total_distance += first_bounce_height * 2; // Calculate the distance for both vertical movement and return bounce
    }

    // Correct the total_distance calculation for the initial drop
    total_distance -= first_bounce_height;

    std::cout << total_distance << std::endl;

    return 0;
}