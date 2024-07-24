#include <iostream>
using namespace std;

int main() {
    double start_height, first_bounce_height;
    int num_bounces;

    cin >> start_height >> first_bounce_height >> num_bounces;

    double bounciness_index = first_bounce_height / start_height;

    double total_distance = 0.0;
    for(int i=1; i<=num_bounces; i++) {
        total_distance += (2 * (start_height + (i-1) * (first_bounce_height - start_height)));
    }

    cout << fixed << setprecision(4);
    cout << bounciness_index << endl;
    cout << total_distance << endl;

    return 0;
}