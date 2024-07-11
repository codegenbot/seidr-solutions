#include <iostream>
using namespace std;

int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance = 0.0;
    int num_bounces;

    cin >> start_height >> first_bounce_height >> num_bounces;

    bounciness_index = first_bounce_height / start_height;
    total_distance = start_height + first_bounce_height;

    double current_height = first_bounce_height;
    for (int i = 2; i <= num_bounces; ++i) {
        current_height = current_height * bounciness_index;
        total_distance += current_height * 2.0 + start_height;
    }

    cout << total_distance << endl;

    return 0;
}