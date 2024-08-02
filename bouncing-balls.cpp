#include <iostream>
using namespace std;

int main() {
    double start_height, first_bounce_height;
    int num_bounces;

    cin >> start_height >> first_bounce_height >> num_bounces;

    double bounciness_index = first_bounce_height / start_height;

    double total_distance = 0.5 * (1 + pow(bounciness_index, 2)) * (1 - pow(bounciness_index, 2)) * (num_bounces * 4);

    cout.precision(10);
    cout << fixed << total_distance;
    
    return 0;
}