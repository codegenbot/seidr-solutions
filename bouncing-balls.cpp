#include <iostream>
using namespace std;

int main() {
    double start_height, first_bounce;
    int num_bounces;

    cin >> start_height >> first_bounce >> num_bounces;

    double bounciness = first_bounce / start_height;

    double total_distance = 0.0;
    for(int i = 1; i <= num_bounces; i++) {
        total_distance += (2 * pow(bounciness, i));
    }

    cout.precision(6);
    cout << fixed << total_distance << endl;

    return 0;
}