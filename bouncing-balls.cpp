#include <iostream>
using namespace std;

int main() {
    double start_height, first_bounce_height;
    int num_of_bounces;

    cin >> start_height >> first_bounce_height >> num_of_bounces;

    // Calculate bounciness index
    double bounciness_index = first_bounce_height / start_height;

    // Calculate total distance traveled
    double total_distance = 0.5 * (1 + pow(bounciness_index, 2)) * num_of_bounces;

    cout.precision(6);
    cout << fixed;
    cout << total_distance << endl;

    return 0;
}