#include <iostream>
using namespace std;

int main() {
    double height, first_bounce_height;
    int num_bounces;

    cin >> height >> first_bounce_height >> num_bounces;

    double bounciness_index = first_bounce_height / height;

    double total_distance = 0.0;

    for(int i = 1; i <= num_bounces; i++) {
        total_distance += (height - ((double)(2*i-1) * height * (1 - pow(bounciness_index, i)) / ((i + 1) * pow(2, i))));
    }

    cout << fixed << setprecision(4) << total_distance;

    return 0;
}