#include <iostream>
using namespace std;

int main() {
    double start_height;
    cin >> start_height;

    double first_bounce;
    cin >> first_bounce;

    double bounciness_index = first_bounce / start_height;

    int num_bounces;
    cin >> num_bounces;

    double total_distance = 0.5 * (1 - pow(bounciness_index, 2)) * num_bounces;
    cout << fixed << setprecision(6) << total_distance;
    
    return 0;
}