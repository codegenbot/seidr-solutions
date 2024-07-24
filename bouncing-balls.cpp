#include <iostream>
using namespace std;

int main() {
    double start_height, first_bounce, bounciness;
    int num_bounces;

    cin >> start_height >> first_bounce >> num_bounces;

    // calculate bounciness index (height of first bounce / starting height)
    bounciness = first_bounce / start_height;

    // calculate total distance traveled
    double total_distance = 0.0;
    for(int i = 1; i <= num_bounces; i++) {
        total_distance += (1 + bounciness) * pow(2, -i);
    }

    // print output
    cout << fixed << setprecision(4);
    cout << total_distance;

    return 0;
}