#include <iostream>

double calculate_total_distance(double starting_height, double bounce_height, int num_bounces) {
    double bounciness_index = bounce_height / starting_height;
    double total_distance = 0.0;
    total_distance += starting_height + bounce_height;
    for (int i = 2; i <= num_bounces; ++i) {
        bounce_height *= bounciness_index;
        total_distance += bounce_height * 2;
    }
    return total_distance;
}

int main() {
    double starting_height, bounce_height;
    int num_bounces;
    std::cin >> starting_height >> bounce_height >> num_bounces;
    double result = calculate_total_distance(starting_height, bounce_height, num_bounces);
    std::cout << result << std::endl;
    return 0;
}