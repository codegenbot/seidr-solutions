#include <iostream>
using namespace std;

int main() {
    double start_height, first_bounce, bounciness_index;
    int num_bounces;

    cin >> start_height >> first_bounce >> num_bounces;

    bounciness_index = first_bounce / start_height;

    cout << fixed << setprecision(4) << bounciness_index << endl;

    cout << fixed << setprecision(4) << (bounciness_index * 2 - 1) * (num_bounces * 2 - 1) << endl;

    return 0;
}