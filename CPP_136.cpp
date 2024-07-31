#include <iostream>
#include <vector>
#include <climits>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> largest_smallest_integers(std::vector<int> lst){
    int largest_negative = INT_MIN;
    int smallest_positive = INT_MAX;
    
    for(int num : lst){
        if(num < 0 && num > largest_negative){
            largest_negative = num;
        }
        if(num > 0 && num < smallest_positive){
            smallest_positive = num;
        }
    }
    
    return {largest_negative, smallest_positive};
}

int main() {
    std::vector<int> input = {3, -2, 5, -7, 1};
    std::vector<int> output = largest_smallest_integers(input);
    
    std::vector<int> expected_output = {-2, 1};
    
    if (issame(output, expected_output)){
        // Output is as expected
        return 0;
    } else {
        // Output is not as expected
        return 1;
    }
}