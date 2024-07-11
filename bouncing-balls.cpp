#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double start_height, first_bounce_height, bounciness_index;
    int num_bounces;

    cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;

    double total_distance = start_height;
    total_distance += start_height * bounciness_index * 2;
    for (int i = 1; i < num_bounces; ++i) {
        start_height *= bounciness_index;
        total_distance += start_height * 2;
    }

    cout << fixed << setprecision(14) << total_distance << endl;

    return 0;
}