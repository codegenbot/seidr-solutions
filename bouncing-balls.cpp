#include <iostream>
using namespace std;

int main() {
    double start_height, first_bounce;
    int num_bounces;
    cin >> start_height >> first_bounce >> num_bounces;
    
    // Calculate bounciness index
    double bounciness_index = first_bounce / start_height;
    
    // Calculate total distance
    double total_distance = (1 + bounciness_index) * (2 * num_bounces - 0.5);
    
    cout << fixed << setprecision(4);
    cout << total_distance << endl;
    
    return 0;
}