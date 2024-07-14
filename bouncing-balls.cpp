#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double start_height;
    double first_bounce_height;
    int num_bounces;

    cin >> start_height >> first_bounce_height >> num_bounces;

    // Calculate bounciness index
    double bounciness_index = (first_bounce_height / start_height);

    // Calculate total distance traveled
    double total_distance = 0.0;
    for(int i=1; i<=num_bounces; i++) {
        total_distance += pow(2, i) * (bounciness_index - 1);
    }

    cout.precision(5); 
    cout << fixed << total_distance << endl;

    return 0;
}