#include <iostream>
#include <cmath>

int main() {
    double start_height, first_bounce_height, bounciness_index;
    int num_bounces;
    
    std::cin >> start_height >> first_bounce_height >> num_bounces;
    
    bounciness_index = first_bounce_height / start_height;
    
    double common_ratio = 1 + bounciness_index;
    double total_distance = (start_height + first_bounce_height) * (1 - std::pow(bounciness_index, num_bounces + 1)) / (1 - bounciness_index) - start_height + bounciness_index * (common_ratio - std::pow(bounciness_index, num_bounces + 1)) * start_height;
    
    std::cout << total_distance << std::endl;
    
    return 0;
}