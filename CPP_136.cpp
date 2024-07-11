#include <iostream>
#include <vector>
#include <climits>

vector<int> largest_smallest_integers(vector<int> lst);

int main() {
    vector<int> test_input = {8, -1, 6, -5, 10, -2};
    vector<int> expected_output = {-1, 6};
    
    vector<int> result = largest_smallest_integers(test_input);
    
    if(result == expected_output) {
        std::cout << "Output matches expected values." << std::endl;
    } else {
        std::cout << "Output does not match expected values." << std::endl;
    }
    
    return 0;
}

vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result = {0, 0};
    int largestNegative = INT_MIN;
    int smallestPositive = INT_MAX;
    
    for(int num : lst){
        if(num < 0 && num > largestNegative){
            largestNegative = num;
        }
        if(num > 0 && num < smallestPositive){
            smallestPositive = num;
        }
    }
    
    if(largestNegative != INT_MIN){
        result[0] = largestNegative;
    }
    if(smallestPositive != INT_MAX){
        result[1] = smallestPositive;
    }
    
    return result;
}