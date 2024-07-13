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
        total_distance += pow(2, -bounciness_index) * start_height * (1 + bounciness_index);
        start_height /= 2;
    }

    // Print results
    cout << fixed << setprecision(5);
    cout << first_bounce_height / start_height << endl;
    cout << total_distance << endl;

    return 0;
}