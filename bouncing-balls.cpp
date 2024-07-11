#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance;
    int num_bounces;

    cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;
    total_distance = start_height + first_bounce_height;

    for (int i = 2; i <= num_bounces; ++i) {
        first_bounce_height *= bounciness_index;
        total_distance += 2 * first_bounce_height * pow(bounciness_index, i) * (1 + bounciness_index);
    }

    total_distance += 2 * first_bounce_height * pow(bounciness_index, num_bounces) * (1 + bounciness_index);

    cout << total_distance << endl;

    return 0;
}