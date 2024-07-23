#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance = 0.0;
    int num_bounces;
    
    cin >> start_height >> first_bounce_height >> num_bounces;
    
    bounciness_index = first_bounce_height / start_height;
    
    total_distance = start_height + first_bounce_height;
    
    double additional_distance = 0.0;
    for (int i = 2; i <= num_bounces; ++i) {
        additional_distance += 2 * first_bounce_height * pow(bounciness_index, i - 1);
    }
    
    total_distance += additional_distance;
    
    cout << fixed << total_distance << endl;
    
    return 0;
}