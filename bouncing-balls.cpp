#include <iostream>
using namespace std;

int main() {
    double start_height, first_bounce_height;
    int num_bounces;

    cin >> start_height >> first_bounce_height >> num_bounces;

    // Calculate bounciness index
    double bounciness_index = first_bounce_height / start_height;

    // Calculate total distance
    double total_distance = (1 + pow(bounciness_index, 2)) * num_bounces;
    total_distance /= (1 - pow(bounciness_index, 2));

    cout.precision(5);
    cout << fixed << total_distance << endl;

    return 0;
}