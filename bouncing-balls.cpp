#include <iostream>

int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance;
    int num_bounces;

    std::cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;
    total_distance = start_height;

    double bounce_height = start_height * bounciness_index * bounciness_index;
    for (int i = 0; i < num_bounces; ++i) {
        total_distance += bounce_height + bounce_height * bounciness_index; // Add distance for going up and coming down
        bounce_height = start_height * bounciness_index * bounciness_index; // Recalculate bounce height inside the loop
    }

    std::cout << total_distance << std::endl;

    return 0;
}