#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance = 0.0;
    int num_bounces;

    cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;

    total_distance = start_height;

    for (int i = 1; i < num_bounces; ++i) {
        start_height *= 1.0 + bounciness_index;
        if (i % 2 == 0) {
            total_distance += start_height;
        } else {
            total_distance += 2.0 * start_height;
        }
    }

    cout << total_distance << endl;

    return 0;
}