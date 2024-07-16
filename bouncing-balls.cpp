#include <iostream>
#include <iomanip>
#include <cmath> 
using namespace std;

int main() {
    double start_height;
    double first_bounce_height;
    int num_bounces;

    cin >> start_height >> num_bounces;
    char temp;  
    cin >> temp;
    cin >> first_bounce_height; 

    double bounciness_index = first_bounce_height / start_height;

    double total_distance = 0.0; 
    double prev_distance = 1.0;   

    for(int i = 1; i <= num_bounces; ++i) {
        total_distance += prev_distance;
        prev_distance *= 2.0; 
        if(i < num_bounces)
            prev_distance += 1.0; 
    }

    cout << std::fixed << std::setprecision(10) << total_distance;

    return 0;
}