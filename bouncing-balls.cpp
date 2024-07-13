#include <iostream>
using namespace std;

int main() {
    double height_start;
    double height_first_bounce;
    int num_of_bounces;
    
    cin >> height_start >> height_first_bounce >> num_of_bounces;
    
    // Calculate bounciness index
    double bounciness_index = height_first_bounce / height_start;
    
    // Calculate total distance traveled by the ball
    double total_distance = 0.0;
    for (int i = 1; i <= num_of_bounces; ++i) {
        total_distance += pow(bounciness_index, i);
    }
    
    cout.setprecision(5); // Set precision to 5 decimal places
    
    cout << fixed << height_first_bounce / height_start << endl;
    cout << fixed << total_distance << endl;
    
    return 0;
}