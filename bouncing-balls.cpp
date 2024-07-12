#include <iostream>

int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance = 0.0;
    int num_bounces;

    std::cin >> start_height >> first_bounce_height >> num_bounces;

    double max_height = first_bounce_height;
    double min_height = start_height;
    if(first_bounce_height < start_height) {
        max_height = start_height;
        min_height = first_bounce_height;
    }
    bounciness_index = max_height / min_height;
    total_distance = start_height + first_bounce_height;

    for (int i = 2; i <= num_bounces; ++i) {
        first_bounce_height *= bounciness_index;
        total_distance += 2 * first_bounce_height;
    }
    total_distance += start_height;

    std::cout << total_distance << std::endl;

    return 0;
}