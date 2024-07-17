#include <iostream>
using namespace std;

int main() {
    double start_height, first_bounce_height;
    int num_bounces;

    cin >> start_height >> first_bounce_height >> num_bounces;

    // Calculate bounciness index
    double bounciness_index = first_bounce_height / start_height;

    // Calculate total distance traveled
    double total_distance = 0.0;
    for (int i = 1; i <= num_bounces; ++i) {
        if (i == 1) { // For the first bounce, add the height of the bounce itself
            total_distance += first_bounce_height;
        } else {
            total_distance += start_height * bounciness_index;
        }
    }

    cout << fixed << setprecision(6);
    cout << total_distance;

    return 0;
}