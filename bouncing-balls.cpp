#include <iostream>
using namespace std;

int main() {
    double starting_height, first_bounce_height, bounciness_index, total_distance;
    int num_bounces;
    
    // Read input
    cin >> starting_height >> first_bounce_height >> num_bounces;
    
    // Calculate bounciness index
    bounciness_index = first_bounce_height / starting_height;
    
    // Calculate total distance
    total_distance = starting_height;
    for (int i = 0; i < num_bounces; i++) {
        total_distance += 2 * bounciness_index * starting_height;
        starting_height *= bounciness_index;
    }
    
    // Print output
    cout << total_distance << endl;
    
    return 0;
}