#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double start_height;
    cin >> start_height;
    
    double first_bounce_height;
    cin >> first_bounce_height;
    
    double bounciness_index = first_bounce_height / start_height;
    
    int num_of_bounces;
    cin >> num_of_bounces;
    
    double total_distance = (1 - pow(bounciness_index, 2)) * (start_height + first_bounce_height) * num_of_bounces;
    
    cout << fixed << setprecision(5);
    cout << total_distance << endl;
    
    return 0;
}