#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double starting_height, bounce_height, bounciness_index, total_distance = 0.0;
    int num_bounces;

    cin >> starting_height >> bounce_height >> num_bounces;

    bounciness_index = bounce_height / starting_height;

    total_distance = starting_height + (starting_height + bounce_height);

    for (int i = 2; i <= num_bounces; i++) {
        total_distance += (starting_height * pow(bounciness_index, i));
    }

    cout << total_distance << endl;

    return 0;
}