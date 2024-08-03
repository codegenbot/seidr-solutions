#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> largest_smallest_integers(std::vector<int> nums){
    int smallest = INT_MAX;
    int largest = INT_MIN;
    
    for(int num : nums){
        if(num < smallest)
            smallest = num;
        if(num > largest)
            largest = num;
    }
    
    return {smallest, largest};
}

int main(){
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-100, 1}));
    // Add more test cases as needed
    return 0;
}