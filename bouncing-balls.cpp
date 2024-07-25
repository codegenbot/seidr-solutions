#include <iostream>
using namespace std;

int main() {
    double start_height, first_bounce_height;
    int num_of_bounces;

    cin >> start_height >> first_bounce_height >> num_of_bounces;

    double bounciness_index = first_bounce_height / start_height;
    double total_distance = 0.0;

    for(int i = 1; i <= num_of_bounces; i++) {
        total_distance += (2 * start_height) * (1 - pow(bounciness_index, i));
    }

    cout << fixed << setprecision(4);
    cout << total_distance << endl;

    return 0;
}