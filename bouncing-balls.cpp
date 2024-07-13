#include <iostream>
using namespace std;

int main() {
    double start_height, first_bounce;
    int num_bounces;
    
    cin >> start_height >> first_bounce >> num_bounces;
    
    if(start_height == 0.0) {
        cout << "Error: Start height cannot be zero." << endl;
        return 1; // or throw an exception
    }
    
    double bounciness_index = first_bounce / start_height;
    double total_distance = (bounciness_index - 1.0) * num_bounces * start_height;
    
    cout.setprecision(5); // for accurate decimal output
    
    cout << fixed << setprecision(4);
    cout << total_distance << endl;
    
    return 0;
}