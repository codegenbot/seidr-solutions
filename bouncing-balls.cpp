#include <iostream>
using namespace std;

int main() {
    double start_height;
    double first_bounce_height;
    int num_bounces;

    cin >> start_height >> first_bounce_height >> num_bounces;

    double bounciness_index = first_bounce_height / start_height;

    double total_distance = (1 + pow(bounciness_index, 2)) * num_bounces * start_height;
    cout << fixed << setprecision(6) << total_distance << endl;

    return 0;
}