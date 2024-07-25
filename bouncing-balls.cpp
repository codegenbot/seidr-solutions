#include <iostream>
using namespace std;

int main() {
    double start_height;
    double first_bounce_height;
    int num_bounces;

    cin >> start_height >> first_bounce_height >> num_bounces;

    // Calculate bounciness index
    double bounciness_index = first_bounce_height / start_height;

    // Calculate total distance
    double total_distance = 0.5 * (1 - pow(bounciness_index, 2)) * start_height;
    
    for(int i = 1; i < num_bounces; i++) {
        total_distance += 0.5 * (pow(bounciness_index, 2) - 1) * pow(start_height, i + 1);
    }

    cout << fixed << setprecision(4);
    cout << total_distance << endl;

    return 0;
}