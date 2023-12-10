```
#include <iostream>
using namespace std;

// Function to calculate bounciness index
double bounciness(double starting_height, double first_bounce_height) {
    return (first_bounce_height / starting_height);
}

// Function to calculate total distance traveled by the ball
double total_distance(int num_of_bounces, double bounciness_index) {
    // Calculate the total distance traveled by the ball
    double distance = 0;
    for (int i = 1; i <= num_of_bounces; i++) {
        distance += bounciness_index * pow(2, i);
    }
    return distance;
}

int main() {
    // Input starting height and first bounce height
    double starting_height, first_bounce_height;
    cin >> starting_height >> first_bounce_height;
    
    // Calculate bounciness index
    double bounciness_index = bounciness(starting_height, first_bounce_height);
    
    // Input number of bounces and calculate total distance traveled by the ball
    int num_of_bounces;
    cin >> num_of_bounces;
    double total_distance = total_distance(num_of_bounces, bounciness_index);
    
    // Output total distance traveled by the ball
    cout << "Total distance: " << total_distance << endl;
    
    return 0;
}