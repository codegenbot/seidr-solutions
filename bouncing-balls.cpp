#include <iostream>
using namespace std;

int main() {
    double start_height, first_bounce;
    int num_bounces;
    
    cin >> start_height >> first_bounce >> num_bounces;
    
    double bounciness = first_bounce / start_height;
    
    double total_distance = 0.0;
    
    for(int i=1; i<=num_bounces; i++){
        total_distance += pow(2, 0.5) * (start_height + first_bounce - (first_bounce % start_height)) * bounciness / start_height;
        start_height = first_bounce;
        first_bounce /= 2.0;
    }
    
    cout << fixed << setprecision(4);
    cout << total_distance << endl;
    
    return 0;
}