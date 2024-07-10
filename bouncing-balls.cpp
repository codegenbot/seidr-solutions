#include <iostream>
using namespace std;

int main() {
    double start_height;
    cin >> start_height;
    double first_bounce_height;
    cin >> first_bounce_height;
    double bounciness_index = first_bounce_height / start_height;

    int num_bounces;
    cin >> num_bounces;

    double total_distance = 0.0;
    for(int i = 1; i <= num_bounces; ++i) {
        total_distance += (2 * (1 - pow(bounciness_index, i)) / (1 + bounciness_index));
    }

    cout << fixed << setprecision(4);
    cout << start_height << endl;
    cout << fixed << setprecision(4);
    cout << first_bounce_height << endl;
    cout << fixed << setprecision(4);
    cout << total_distance << endl;

    return 0;
}