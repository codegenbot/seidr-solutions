#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double height_start, height_first_bounce;
    int num_bounces;

    cin >> height_start >> height_first_bounce >> num_bounces;

    double bounciness_index = height_first_bounce / height_start;

    double total_distance = 0.0;
    for(int i=1; i<=num_bounces; ++i) {
        total_distance += (height_start + (height_first_bounce - height_start)) * pow(bounciness_index, i);
    }

    cout << fixed << setprecision(6) << total_distance;

    return 0;
}