#include <iostream>
#include <cmath>

int main() {
    double start_height, bounce_height;
    int num_bounces;
    std::cin >> start_height >> bounce_height >> num_bounces;
    
    double bounciness_index = bounce_height / start_height;
    double total_distance = start_height + bounce_height;
    for (int i = 2; i <= num_bounces; ++i) {
        total_distance += 2 * start_height * std::pow(bounciness_index, i);
    }
    
    std::cout << total_distance << std::endl;
    
    return 0;
}