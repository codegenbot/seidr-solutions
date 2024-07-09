#include <iostream>
#include <cmath>

int main() {
    double starting_height, bounce_height, bounciness_index, total_distance = 0.0;
    int num_bounces;
    
    std::cin >> starting_height >> bounce_height >> num_bounces;
    
    bounciness_index = bounce_height / starting_height;
    
    total_distance = starting_height + (starting_height + bounce_height);
    
    for (int i = 2; i <= num_bounces; i++) {
        total_distance += (starting_height * std::pow(bounciness_index, i));
    }
    
    std::cout << total_distance << "\n";
    
    return 0;
}