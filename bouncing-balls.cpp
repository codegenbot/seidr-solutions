#include <iostream>
using namespace std;

int main() {
    double start_height, first_bounce_height;
    int num_bounces;

    cin >> start_height >> first_bounce_height >> num_bounces;

    // Calculate bounciness index
    double bounciness_index = first_bounce_height / start_height;

    // Calculate total distance traveled
    double total_distance = (1 + bounciness_index) * (2.0 + 2.0*bounciness_index) * pow(bounciness_index, num_bounces);

    cout << fixed << setprecision(5);
    cout << total_distance << endl;

    return 0;
}