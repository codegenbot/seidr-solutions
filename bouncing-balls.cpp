#include <iostream>
using namespace std;

int main() {
    double height_start, height_bounce;
    int num_bounces;

    cin >> height_start >> height_bounce >> num_bounces;

    double bounciness_index = height_bounce / height_start;

    double total_distance = 0.0;
    for (int i = 1; i <= num_bounces; i++) {
        total_distance += pow(bounciness_index, i);
    }

    cout.precision(6); // to display the result with high precision
    cout << fixed << total_distance << endl;

    return 0;
}