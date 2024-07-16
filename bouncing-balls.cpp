#include <iostream>
using namespace std;

int main() {
    double start_height, first_bounce_height;
    int num_bounces;
    cin >> start_height >> first_bounce_height >> num_bounces;

    double bounciness_index = first_bounce_height / start_height;
    double total_distance = start_height * (1 + bounciness_index); // Formula for total distance

    for (int i = 1; i < num_bounces; ++i) {
        total_distance += 2 * start_height * pow(bounciness_index, i + 1); // Updating total distance
    }

    cout << total_distance << endl;

    return 0;
}