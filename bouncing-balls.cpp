#include <iostream>
using namespace std;

int main() {
    double start_height, first_bounce_height;
    int num_bounces;

    cin >> start_height >> first_bounce_height >> num_bounces;

    // Calculate bounciness index
    double bounciness_index = first_bounce_height / start_height;

    // Calculate total distance traveled by ball
    double total_distance = 0.0;
    for (int i = 1; i <= num_bounces; ++i) {
        total_distance += start_height * pow(bounciness_index, i);
    }

    cout << fixed << setprecision(5);
    cout << start_height + total_distance;

    return 0;
}