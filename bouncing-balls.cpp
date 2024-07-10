#include <iostream>
using namespace std;

int main() {
    double starting_height, first_bounce_height;
    int num_bounces;

    cin >> starting_height >> first_bounce_height >> num_bounces;

    double bounciness_index = first_bounce_height / starting_height;

    double total_distance = 0.0;

    for (int i = 1; i <= num_bounces; ++i) {
        total_distance += pow(2.0, -bounciness_index);
    }

    cout.precision(5); // To avoid displaying too many decimal places
    cout << fixed << total_distance << endl;
    return 0;
}