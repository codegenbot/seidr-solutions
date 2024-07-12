#include <iostream>

int main() {
    double start_height, first_bounce_height, total_distance;
    int num_bounces;
    
    std::cin >> start_height >> first_bounce_height >> num_bounces;
    
    double bounciness_index = first_bounce_height / start_height;
    total_distance = start_height + first_bounce_height;
    
    for (int i = 2; i <= num_bounces; i++) {
        total_distance += first_bounce_height * pow(bounciness_index, i);
    }
    
    std::cout << total_distance << std::endl;
    
    return 0;
}