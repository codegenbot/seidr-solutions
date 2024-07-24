#include <iostream>
using namespace std;

int main() {
    double start_height;
    double first_bounce;
    int num_bounces;

    cin >> start_height >> first_bounce >> num_bounces;

    double bounciness_index = first_bounce / start_height;

    double total_distance = 0.0;
    for (int i = 1; i <= num_bounces; ++i) {
        total_distance += pow(2, -bounciness_index);
    }

    cout.setprecision(5); // to display the output with 5 decimal places
    cout << fixed << setprecision(5) << total_distance << endl;

    return 0;
}