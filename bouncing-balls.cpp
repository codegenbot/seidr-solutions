#include <iostream>
using namespace std;

int main() {
    double start_height;
    double first_bounce_height;
    int num_bounces;

    cin >> start_height >> first_bounce_height >> num_bounces;

    // Calculate bounciness index
    double bounciness_index = first_bounce_height / start_height;

    // Calculate total distance traveled
    double total_distance = 0.0;
    for (int i = 1; i <= num_bounces; ++i) {
        if (i == 1) {  // First bounce is from start_height to first_bounce_height
            total_distance += start_height + first_bounce_height - start_height;
        } else {         // Later bounces are from previous height to previous height * bounciness_index
            total_distance += (start_height * pow(bounciness_index, i)) -
                               (start_height * pow(bounciness_index, i - 1));
        }
    }

    cout << fixed << setprecision(6);
    cout << start_height + first_bounce_height - start_height + std::fixed << std::setprecision(6) << total_distance;
    return 0;
}