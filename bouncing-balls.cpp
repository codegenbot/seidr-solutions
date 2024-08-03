#include <iostream>

int main() {
    double starting_height, total_distance, bounciness_index;
    int num_bounces;
    std::cin >> starting_height >> bounciness_index >> num_bounces;
    total_distance = starting_height;
    for (int i = 0; i < num_bounces; i++) {
        total_distance += 2 * total_distance * bounciness_index;
    }
    std::cout << total_distance << std::endl;
    return 0;
}