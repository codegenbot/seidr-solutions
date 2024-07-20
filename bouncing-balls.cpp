#include <iostream>
using namespace std;

int main() {
    double starting_height, first_bounce_height;
    int num_bounces;

    cin >> starting_height >> first_bounce_height >> num_bounces;

    // calculate bounciness index
    double bounciness_index = first_bounce_height / starting_height;

    // calculate total distance traveled
    double total_distance = (num_bounces * 2) + (bounciness_index - 1);

    cout << fixed << setprecision(6);
    cout << total_distance << endl;

    return 0;
}