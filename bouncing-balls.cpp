#include <iostream>

int main() {
    double starting_height, first_bounce_height;
    int num_bounces;
    
    std::cin >> starting_height >> first_bounce_height >> num_bounces;
    
    double bounciness_index = first_bounce_height / starting_height;
    double total_distance = starting_height + (first_bounce_height * 2);
    
    for (int i = 2; i <= num_bounces; i++) {
        total_distance += first_bounce_height * pow(bounciness_index, i);
    }
    
    std::cout << total_distance << std::endl;
    
    return 0;
}