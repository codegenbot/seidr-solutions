#include <iostream>
using namespace std;

int main() {
    double start_height;
    double first_bounce_height;
    int num_bounces;

    cin >> start_height >> first_bounce_height >> num_bounces;

    double bounciness_index = first_bounce_height / start_height;

    double total_distance = 0.5 * (1 - pow(bounciness_index, -num_bounces)) / (1 - bounciness_index);

    cout << fixed << setprecision(4) << total_distance;

    return 0;
}