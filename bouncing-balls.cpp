#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance = 0.0;
    int num_bounces;

    cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;

    for (int i = 0; i < num_bounces; ++i) {
        total_distance += start_height + first_bounce_height;
        total_distance += first_bounce_height * (1 + bounciness_index) * pow(bounciness_index, i - 1);
    }

    cout << fixed << total_distance << endl;

    return 0;
}