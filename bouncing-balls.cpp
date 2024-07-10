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
        total_distance += (2 * (start_height + (bounciness_index - 1)) * pow(bounciness_index, i));
    }

    cout << fixed << setprecision(4);
    cout << bounciness_index << endl;
    cout << total_distance << endl;

    return 0;
}