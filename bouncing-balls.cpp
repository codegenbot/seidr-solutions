#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double starting_height, first_bounce_height;
    int num_bounces;
    
    std::cin >> starting_height >> first_bounce_height >> num_bounces;
    
    double bounciness_index = first_bounce_height / starting_height;
    double total_distance = starting_height;
    
    for (int i = 0; i < num_bounces; i++) {
        bounciness_index = sqrt(1 / bounciness_index);
        total_distance += 2 * (bounciness_index * total_distance);
    }
    
    std::cout.precision(15);
    std::cout << total_distance << std::endl;
    
    return 0;
}