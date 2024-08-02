#include <iostream>
using namespace std;

int main() {
    double start_height;
    cin >> start_height;
    
    double first_bounce_height;
    cin >> first_bounce_height;
    
    double bounciness_index = first_bounce_height / start_height;
    
    int num_of_bounces;
    cin >> num_of_bounces;
    
    double total_distance = 0.0;
    for(int i = 1; i <= num_of_bounces; i++) {
        total_distance += pow(2, -bounciness_index) * (2 * start_height);
        start_height *= bounciness_index;
    }
    
    cout << fixed << setprecision(6) << total_distance << endl;

    return 0;
}