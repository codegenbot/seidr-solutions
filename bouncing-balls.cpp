```
#include <iostream>
using namespace std;
int main(){
    double h0, h1, bounciness_index, total_distance = 0;
    int num_bounces;
    
    cout << "Enter the starting height of the ball: ";
    cin >> h0;
    cout << "Enter the height after the first bounce: ";
    cin >> h1;
    cout << "Enter the number of bounces: ";
    cin >> num_bounces;
    
    bounciness_index = h1 / h0;
    
    for (int i = 0; i < num_bounces; i++) {
        total_distance += 2 * bounciness_index * (h0 + (i+1) * h1);
    }
    
    cout << "The total distance that the ball travels across " << num_bounces << " bounces is: " << total_distance;
    
    return 0;
}