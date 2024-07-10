#include <iostream>
using namespace std;

int main() {
    double height_start, height_first_bounce;
    int num_bounces;

    cin >> height_start >> height_first_bounce >> num_bounces;

    double bounciness_index = height_first_bounce / height_start;

    cout << fixed << setprecision(5) << (height_start * ((1 + bounciness_index) * pow((1 - bounciness_index), num_bounces))) << endl;

    return 0;
}