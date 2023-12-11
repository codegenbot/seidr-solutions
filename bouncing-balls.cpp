```cpp
#include <iostream>
#include <limits>

int main() {
    double starting_height, first_bounce_height;
    int num_bounces;

    std::cin >> starting_height >> first_bounce_height >> num_bounces;

    double bounciness_index = first_bounce_height / starting_height;
    double total_distance = starting_height;

    if (starting_height <= 0 || num_bounces < 0) {
        std::cout << "Invalid input" << std::endl;
        return 0;
    }

    for (int i = 0; i < num_bounces; i++) {
        total_distance *= (1 + bounciness_index);
        first_bounce_height *= bounciness_index;
    }

    std::cout << total_distance << std::endl;

    return 0;
}
```