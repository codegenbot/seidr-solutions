#include <iostream>
#include <cmath>
#include <iomanip>

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
    for (int i = 1; i <= num_bounces; ++i) {
        total_distance += std::pow(2, -bounciness_index) * start_height;
    }

    cout << fixed << setprecision(5);
    cout << total_distance << endl;

    return 0;
}