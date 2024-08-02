#include <iostream>

int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance;
    int num_bounces;

    std::cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;
    total_distance = start_height + 2 * first_bounce_height * (1 + bounciness_index);

    std::cout << total_distance << std::endl;

    return 0;
}