#include <iostream>
using namespace std;

int main() {
    double start_height;
    cin >> start_height;
    double first_bounce;
    cin >> first_bounce;
    int num_bounces;
    cin >> num_bounces;

    double bounciness_index = first_bounce / start_height;

    double total_distance = 0.0;
    for(int i = 1; i <= num_bounces; i++) {
        total_distance += (start_height * pow(bounciness_index, i));
    }

    cout << fixed << setprecision(4);
    cout << total_distance << endl;

    return 0;
}