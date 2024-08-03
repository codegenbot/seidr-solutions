#include <iostream>

int main() {
    double starting_height, total_distance, bounciness_index;
    int num_bounces;
    std::cin >> starting_height >> total_distance >> num_bounces;
    bounciness_index = total_distance / starting_height;
    for (int i = 0; i < num_bounces; i++) {
        total_distance += 2 * starting_height * bounciness_index;
        starting_height *= bounciness_index;
    }
    std::cout << total_distance << std::endl;
    return 0;
}