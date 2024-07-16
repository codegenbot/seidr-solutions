```cpp
#include <iostream>
#include <iomanip> 
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

    double prev_height = first_bounce_height;
    double total_distance = 0.0;

    for(int i = 1; i <= num_bounces; ++i) {
        total_distance += pow(bounciness_index, i) / (i+1);
        prev_height /= 2.0; 
    }

    cout << fixed << std::setprecision(6) << total_distance << endl;
    return 0;
}