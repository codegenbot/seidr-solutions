#include <iostream>

int main() {
    int num_bounces;
    double bounce_height, bounciness_index, total_distance;

    for (int i = 0; i < num_bounces - 1; ++i) {
        bounce_height *= bounciness_index;
        total_distance += bounce_height * (1 + bounciness_index);
    }

    total_distance += bounce_height * (1 + bounciness_index);

    std::cout << total_distance << std::endl;

    return 0;
}