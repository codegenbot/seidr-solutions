#include <iostream>

int main() {
    double start_height, first_bounce_height, bounciness_index;
    int num_bounces;
    std::cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;

    double total_distance;
    total_distance = start_height + (num_bounces * first_bounce_height);
    total_distance += (num_bounces - 1) * first_bounce_height * bounciness_index * 2;

    std::cout << total_distance << std::endl;

    return 0;
}