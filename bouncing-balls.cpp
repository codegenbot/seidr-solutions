#include <iostream>
using namespace std;

int main() {
    double start_height;
    double first_bounce_height;
    int num_bounces;

    cin >> start_height >> first_bounce_height >> num_bounces;

    // Calculate bounciness index
    double bounciness_index = first_bounce_height / start_height;

    // Calculate total distance
    double total_distance = 0.0;
    for(int i=1; i<=num_bounces; ++i) {
        total_distance += (bounciness_index - 1.0);
    }

    cout.setprecision(5); // Set the precision of output to 5 decimal places
    cout << fixed; // Fixed-point notation

    cout << start_height << endl;
    cout << fixed << setprecision(5) << total_distance << endl;

    return 0;
}