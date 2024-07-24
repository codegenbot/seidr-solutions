#include <iostream>
using namespace std;

int main() {
    double start_height;
    cin >> start_height;
    
    double first_bounce;
    cin >> first_bounce;
    
    double bounciness_index = first_bounce / start_height;
    
    int num_bounces;
    cin >> num_bounces;
    
    double total_distance = (1 - pow(0.5, 2)) * start_height + 2 * start_height * (bounciness_index - 1) * pow(0.5, num_bounces);
    
    cout.precision(4);
    cout << fixed;
    cout << total_distance << endl;
    
    return 0;
}