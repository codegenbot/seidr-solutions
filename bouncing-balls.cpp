#include <iostream>
#include <iomanip> // Include the <iomanip> header

using namespace std;

int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance;
    int num_bounces;

    cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;
    total_distance = start_height + first_bounce_height;

    for (int i = 2; i <= num_bounces; i++) {
        total_distance += 2 * first_bounce_height;
        first_bounce_height *= bounciness_index;
    }

    cout << fixed << setprecision(15) << total_distance << endl; // Set the precision to 15 decimal places

    return 0;
}