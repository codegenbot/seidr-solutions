#include <iostream>

int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance = 0.0;
    int num_bounces;
    
    std::cin >> start_height >> first_bounce_height >> num_bounces;
    
    bounciness_index = first_bounce_height / start_height;

    for (double i = 1.0; i < num_bounces; i++) {
        total_distance += first_bounce_height;
        first_bounce_height *= bounciness_index;
        total_distance += first_bounce_height;
    }

    std::cout << total_distance + start_height << std::endl;

    return 0;
}