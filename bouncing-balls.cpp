#include <iostream>
using namespace std;

int main() {
    double start_height;
    cin >> start_height;
    
    double first_bounce;
    cin >> first_bounce;
    
    int num_bounces;
    cin >> num_bounces;
    
    // Calculate bounciness index
    double bounciness = first_bounce / start_height;
    
    // Calculate total distance traveled
    double total_distance = 0.0;
    for(int i=1; i<=num_bounces; i++) {
        total_distance += (2 * (start_height + (i-1) * (first_bounce - start_height)));
    }
    
    cout << fixed << setprecision(4);
    cout << bounciness << endl;
    cout << total_distance << endl;
    
    return 0;
}