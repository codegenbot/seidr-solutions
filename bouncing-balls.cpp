#include <iostream>
#include <cmath>

int main() {
    double starting_height, first_bounce_height, bounciness_index, total_distance;
    int num_bounces;

    cin >> starting_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / starting_height;
    total_distance = starting_height + (starting_height + first_bounce_height) * bounciness_index * (pow(bounciness_index, num_bounces - 1) - 1) / (bounciness_index - 1);

    cout << total_distance << endl;

    return 0;
}