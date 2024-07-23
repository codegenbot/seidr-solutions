#include <iostream>
using namespace std;

int main() {
    double start_height;
    cin >> start_height;

    double bounce_height;
    cin >> bounce_height;

    double bounciness_index = bounce_height / start_height;

    int num_bounces;
    cin >> num_bounces;

    double total_distance = 0.0;
    for (int i = 1; i <= num_bounces; ++i) {
        total_distance += (bounce_height - start_height) * bounciness_index;
        bounce_height *= bounciness_index;
    }

    cout.setprecision(4);
    cout << fixed << setprecision(4);
    cout << total_distance << endl;

    return 0;
}