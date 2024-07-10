#include <iostream>
using namespace std;

int main() {
    double start_height, first_bounce_height;
    int num_bounces;

    cin >> start_height >> first_bounce_height >> num_bounces;

    // Calculate bounciness index
    double bounciness_index = first_bounce_height / start_height;

    // Calculate total distance traveled
    double total_distance = 2.0 * (1 - pow(bounciness_index, num_bounces)) / (1 - bounciness_index);

    cout << fixed << setprecision(4) << total_distance << endl;

    return 0;
}