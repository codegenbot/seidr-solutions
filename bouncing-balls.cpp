#include <iostream>
#include <cmath>

int main() {
    double start_height, first_bounce_height, bounciness_index;
    int num_bounces;
    
    std::cin >> start_height >> first_bounce_height >> num_bounces;
    
    bounciness_index = first_bounce_height / start_height;
    
    double total_distance = start_height + first_bounce_height;
    double total_bounce_height = first_bounce_height;
    
    for (int i = 2; i <= num_bounces; ++i) {
        total_bounce_height *= bounciness_index;
        total_distance += total_bounce_height + total_bounce_height * bounciness_index;
    }
    
    std::cout << std::fixed << total_distance << std::endl;
    
    return 0;
}