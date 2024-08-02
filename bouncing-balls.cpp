#include <iostream>
using namespace std;

int main() {
    double start_height;
    cin >> start_height;
    
    double first_bounce_height;
    cin >> first_bounce_height;
    
    double bounciness_index = first_bounce_height / start_height;
    
    int num_bounces;
    cin >> num_bounces;
    
    double total_distance = (1 + bounciness_index) * 2.0 - (1 - pow(bounciness_index, num_bounces)) / (1 - bounciness_index);
    
    cout << fixed << setprecision(5) << total_distance << endl;
    
    return 0;
}