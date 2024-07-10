#include <iostream>
using namespace std;

int main() {
    double height_start, height_after_first_bounce;
    int num_of_bounces;

    // Read input from user
    cin >> height_start >> height_after_first_bounce >> num_of_bounces;

    // Calculate bounciness index (height of first bounce / starting height)
    double bounciness_index = height_after_first_bounce / height_start;

    // Calculate total distance that the ball travels across those bounces.
    double total_distance = 0.0;
    for(int i = 1; i <= num_of_bounces; i++) {
        total_distance += pow(bounciness_index, i);
    }

    // Print output
    cout << fixed << setprecision(5) << total_distance << endl;

    return 0;
}