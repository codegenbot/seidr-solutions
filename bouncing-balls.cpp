#include <iostream>
#include <cmath>

double calculate_total_distance(double starting_height, double bounce_height, int num_bounces) {
    double bounciness_index = bounce_height / starting_height;
    return starting_height * (1 - pow(bounciness_index, num_bounces)) / (1 - bounciness_index);
}

int main() {
    double starting_height, bounce_height;
    int num_bounces;

    std::cin >> starting_height >> bounce_height >> num_bounces;

    double total_distance = calculate_total_distance(starting_height, bounce_height, num_bounces);

    std::cout << std::fixed << total_distance << std::endl;

    return 0;
}