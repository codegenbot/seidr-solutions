#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double start_height, first_bounce_height, bounciness_index;
    int num_bounces;

    cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;

    double total_distance = start_height;
    for (int i = 0; i < num_bounces; ++i) {
        start_height *= bounciness_index;
        total_distance += start_height;
    }

    cout << fixed << setprecision(14) << total_distance << endl;

    return 0;
}