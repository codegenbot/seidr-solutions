#include <iostream>
using namespace std;

int main() {
    double start_height, first_bounce;
    int num_bounces;

    cin >> start_height >> first_bounce >> num_bounces;

    // Calculate bounciness index
    double bounciness = first_bounce / start_height;

    // Calculate total distance
    double total_distance = 0.0;
    for (int i = 1; i <= num_bounces; i++) {
        total_distance += pow(bounciness, i);
    }

    cout << fixed << setprecision(6) << total_distance << endl;

    return 0;
}