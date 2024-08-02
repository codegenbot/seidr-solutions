#include <iostream>
using namespace std;

int main() {
    double start_height, bounce_height, bounciness_index;
    int num_bounces;
    
    std::cin >> start_height >> bounce_height >> num_bounces;
    
    bounciness_index = bounce_height / start_height;
    
    double total_distance = start_height; // initial drop
    
    for (int i = 0; i < num_bounces; ++i) {
        total_distance += 2 * bounce_height; // up and down
        bounce_height *= bounciness_index; // decrease on each bounce
    }
    
    std::cout << total_distance << "\n";
    
    return 0;
}