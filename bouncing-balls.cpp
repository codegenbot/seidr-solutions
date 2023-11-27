#include<iostream>
#include<iomanip>
#include<cmath>

int main() {
    double starting_height, first_bounce_height;
    int num_bounces;
    std::cin >> starting_height >> first_bounce_height >> num_bounces;
    double bounciness_index = first_bounce_height / starting_height;
    double total_distance = starting_height;
    for (int i = 0; i < num_bounces; i++) {
        bounciness_index = std::sqrt(bounciness_index);
        total_distance += 2 * (bounciness_index * total_distance);
    }
    std::cout << std::setprecision(15) << total_distance << std::endl;
    return 0;
}