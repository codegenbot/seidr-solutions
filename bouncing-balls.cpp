#include <iostream>

int main() {
    double starting_height, first_bounce_height;
    int num_bounces;
    
    std::cin >> starting_height >> first_bounce_height >> num_bounces;
    
    double bounciness_index = first_bounce_height / starting_height;
    double total_distance = starting_height + first_bounce_height;
    
    for (int i = 2; i <= num_bounces; ++i) {
        double bounce_height = bounciness_index * first_bounce_height;
        total_distance += bounce_height;
        first_bounce_height = bounce_height;
    }
    
    std::cout << total_distance << std::endl;
    
    return 0;
}