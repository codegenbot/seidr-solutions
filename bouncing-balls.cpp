#include <iostream>
using namespace std;

int main() {
    double start_height, first_bounce_height;
    int num_bounces;

    cin >> start_height >> first_bounce_height >> num_bounces;

    double bounciness_index = first_bounce_height / start_height;

    double total_distance = 0.0;

    for(int i=1; i<=num_bounces; i++) {
        if(i == 1) {
            total_distance += (first_bounce_height - start_height);
        } else {
            total_distance += (start_height * bounciness_index * (2.0/(i*2.0+1.0)));
        }
    }

    cout << fixed << setprecision(4);
    cout << total_distance << endl;

    return 0;
}