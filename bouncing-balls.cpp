#include <iostream>

int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance;
    int num_bounces;

    std::cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;
    total_distance = start_height;

    double bounce_height = start_height * bounciness_index;
    for (int i = 0; i < num_bounces; ++i) {
        total_distance += bounce_height; // Distance during bounce
        bounce_height = bounce_height * bounciness_index + bounce_height; // Calculate new bounce height
        total_distance += bounce_height + bounce_height; // Distance during return
    }

    std::cout << total_distance << std::endl;

    return 0;
}