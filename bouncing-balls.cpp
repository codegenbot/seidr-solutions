#include <iostream>

int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance;
    int num_bounces;

    std::cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;
    
    total_distance = start_height;
    double bounce_height = start_height;

    for (int i = 1; i < num_bounces; ++i) {
        bounce_height *= bounciness_index;
        total_distance += 2 * bounce_height; // Calculate both upward and downward distance
    }

    std::cout << total_distance << std::endl;

    return 0;
}