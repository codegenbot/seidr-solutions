#include <iostream>

int main() {
    long double start_height, first_bounce_height, bounciness_index, total_distance, bounce_height;
    int num_bounces;

    std::cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;
    total_distance = start_height;
    bounce_height = start_height * bounciness_index;

    for (int i = 0; i < num_bounces; ++i) {
        total_distance += bounce_height * 2;
        bounce_height *= bounciness_index;
    }

    std::cout << total_distance << std::endl;

    return 0;
}