#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance = 0.0;
    int num_bounces;

    cin >> start_height >> first_bounce_height >> num_bounces;

    if (start_height <= 0 || first_bounce_height <= 0) {
        cout << "Invalid input: Starting height and first bounce height should be greater than zero." << endl;
        return 1;
    }

    bounciness_index = first_bounce_height / start_height;

    if (bounciness_index >= 1) {
        cout << "Invalid input: Bounciness index should be less than 1." << endl;
        return 1;
    }

    if (bounciness_index == 0.0) {
        total_distance = start_height * (num_bounces + 1);
    } else {
        total_distance = start_height * (1 - pow(bounciness_index, num_bounces + 1)) / (1 - bounciness_index);
    }

    cout << total_distance << endl;

    return 0;
}