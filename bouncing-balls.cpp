#include <iostream>
using namespace std;

int main() {
    double start_height, first_bounce_height;
    int num_bounces;

    cin >> start_height >> first_bounce_height >> num_bounces;

    double bounciness_index = first_bounce_height / start_height;

    double total_distance = 0.0;
    for (int i = 1; i <= num_bounces; i++) {
        total_distance += pow(2, -i) * start_height * (1 + bounciness_index);
    }

    cout << fixed << setprecision(5) << total_distance << endl;

    return 0;
}