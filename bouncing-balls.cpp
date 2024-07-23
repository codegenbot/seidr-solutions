#include <iostream>

int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance;
    int num_bounces;

    std::cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;
    
    total_distance = start_height;

    double bounce_height = start_height * bounciness_index; // Corrected bounce height calculation
    
    for (int i = 0; i < num_bounces; ++i) {
        total_distance += bounce_height * 2; // Add distance for going up and coming down
        bounce_height *= bounciness_index; // Correctly calculate new bounce height
    }

    std::cout << total_distance << std::endl;

    return 0;
}