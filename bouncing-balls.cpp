#include <iostream>
using namespace std;

int main() {
    double start_height, first_bounce;
    int num_bounces;

    cin >> start_height >> first_bounce >> num_bounces;

    double bounciness = first_bounce / start_height;

    double total_distance = 0.0;
    for (int i = 1; i <= num_bounces; ++i) {
        total_distance += pow(2, -bounciness) * start_height;
        start_height /= 2.0;
    }

    cout << fixed << setprecision(4);
    cout << bounciness << endl;
    cout << total_distance + start_height << endl;

    return 0;
}