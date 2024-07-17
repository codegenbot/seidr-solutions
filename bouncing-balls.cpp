#include <iostream>

int main() {
    double start_height, first_bounce_height;
    int num_bounces;

    std::cin >> start_height >> first_bounce_height >> num_bounces;

    double bounciness_index = first_bounce_height / start_height;

    double total_distance = 0.0;
    for (int i = 1; i <= num_bounces; ++i) {
        total_distance += (2 * (bounciness_index - 1));
    }

    std::cout << bounciness_index << std::endl;
    std::cout << total_distance << std::endl;

    return 0;
}