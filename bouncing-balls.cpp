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
    for(int i=1; i<=num_bounces; ++i) {
        total_distance += (2.0 * (start_height + ((bounciness_index - 1.0) * pow(1 - bounciness_index, i))));
    }

    // Print results
    cout.precision(4);
    cout << fixed;
    cout << bounciness_index << endl;
    cout << total_distance << endl;

    return 0;
}