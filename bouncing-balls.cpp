#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance;
    int num_bounces;

    cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;

    // Calculate total distance using the formula for the sum of a geometric series
    total_distance = start_height * ((1 - pow(2, num_bounces)) / (1 - 2));

    cout << fixed << total_distance << endl;

    return 0;
}