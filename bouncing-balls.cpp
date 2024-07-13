#include <iostream>

double calculate_total_distance(double starting_height, double bounce_height, int num_bounces) {
    double bounciness_index = bounce_height / starting_height;
    double total_distance = 0.0;

    for (int i = 0; i < num_bounces; ++i) {
        total_distance += starting_height + (bounce_height * 2);
        starting_height += bounce_height;
        bounce_height *= bounciness_index;
    }

    return total_distance;
}

int main() {
    double starting_height, bounce_height;
    int num_bounces;

    std::cin >> starting_height >> bounce_height >> num_bounces;

    double total_distance = calculate_total_distance(starting_height, bounce_height, num_bounces);

    std::cout << std::fixed << total_distance << std::endl;

    return 0;
}