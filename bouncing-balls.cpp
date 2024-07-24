#include <iostream>
using namespace std;

int main() {
    double start_height;
    cin >> start_height;
    
    double first_bounce_height;
    cin >> first_bounce_height;
    
    int num_bounces;
    cin >> num_bounces;
    
    double bounciness_index = (first_bounce_height / start_height);
    
    double total_distance = 0.0;
    
    for(int i=1; i<=num_bounces; i++) {
        if(i==1) {
            total_distance += first_bounce_height;
        } else {
            total_distance += bounciness_index * (start_height - (first_bounce_height * pow(2, 1-i)));
        }
    }
    
    cout << fixed << setprecision(4);
    cout << total_distance << endl;
    
    return 0;
}