#include <iostream>

int main() {
    double start_height, first_bounce_height, bounciness_index;
    int num_bounces;
    std::cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;

    double total_distance = start_height; // Initialize total_distance without first_bounce_height

    for (int i = 1; i < num_bounces; ++i) { // Change loop condition to < instead of <=
        total_distance += first_bounce_height * (1 + bounciness_index); // Remove height update
        first_bounce_height *= bounciness_index; // Update next bounce height after adding distance
    }

    std::cout << total_distance << std::endl;

    return 0;
}