#include <iostream>
using namespace std;

int main() {
    double starting_height, first_bounce_height;
    int num_of_bounces;

    cin >> starting_height >> first_bounce_height >> num_of_bounces;

    double bounciness_index = first_bounce_height / starting_height;

    double total_distance = 0.5 * (1 - pow(bounciness_index, 2)) * (starting_height + first_bounce_height);

    for(int i = 2; i <= num_of_bounces; ++i) {
        total_distance += 2.0 * starting_height * pow(bounciness_index, i);
    }

    cout << fixed << setprecision(4) << total_distance << endl;

    return 0;
}