```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double start_height;
    double first_bounce_height;
    int num_bounces;

    cin >> start_height >> ' ' >> first_bounce_height >> ' ' >> num_bounces;

    double bounciness_index = first_bounce_height / start_height;

    double total_distance = 0.0;
    for(int i = 1; i <= num_bounces; ++i) {
        total_distance += (1 + bounciness_index) * pow(2.0, i);
    }

    std::cout << std::fixed;
    std::cout << std::setprecision(6);
    std::cout << total_distance;

    return 0;
}