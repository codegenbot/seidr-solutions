#include <iostream>
using namespace std;

int main() {
    double start_height, first_bounce_height;
    int num_bounces;
    
    cin >> start_height >> first_bounce_height >> num_bounces;
    
    double bounciness_index = first_bounce_height / start_height;
    
    double total_distance = 0.5 * (1 - pow(bounciness_index, 2)) * start_height;
    
    for(int i=0; i<num_bounces-1; i++) {
        total_distance += 2.0 * start_height * (1-pow(bounciness_index,-(i+1))) / (1 + pow(-bounciness_index,i));
    }
    
    cout.precision(6);
    cout << fixed;
    cout << total_distance << endl;
    
    return 0;
}