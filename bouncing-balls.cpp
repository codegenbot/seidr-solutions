```c++
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double start_height, first_bounce_height;
    int num_bounces;

    std::cin >> start_height >> first_bounce_height >> num_bounces;

    double bounciness_index = first_bounce_height / start_height;

    double total_distance = 0.0;
    for (int i = 1; i <= num_bounces; ++i) {
        total_distance += pow(2, i - 1) * (start_height + (first_bounce_height - start_height) * bounciness_index);
    }

    std::cout << std::fixed << std::setprecision(4) << total_distance;

    return 0;
}