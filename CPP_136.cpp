#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    // Implement the comparison logic
}

std::vector<int> largest_smallest_integers(std::vector<int> nums){
    // Implement the logic to find largest and smallest integers
}

int main(){
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
    // Add more test cases as needed
    return 0;
}