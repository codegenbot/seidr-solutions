#include <iostream>
using namespace std;

int main() {
    double height_start, height_first_bounce;
    int num_bounces;

    cin >> height_start >> height_first_bounce >> num_bounces;

    double bounciness_index = height_first_bounce / height_start;

    double total_distance = (1 - pow(bounciness_index, 2)) * (height_start + height_first_bounce) * num_bounces;

    cout << fixed << setprecision(5);
    cout << total_distance << endl;

    return 0;
}