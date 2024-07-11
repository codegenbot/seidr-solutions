#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double start_height, first_bounce;
    int num_bounces;

    cin >> start_height >> first_bounce >> num_bounces;

    double bounciness_index = first_bounce / start_height;

    double total_distance = 0.0;

    for (int i = 1; i <= num_bounces; i++) {
        total_distance += pow(2, -bounciness_index) * start_height;
    }

    std::fixed << std::setprecision(5);
    cout << fixed << total_distance << endl;

    return 0;
}