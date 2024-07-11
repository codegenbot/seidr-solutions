#include <iostream>
#include <vector>
#include <climits>

vector<int> largest_smallest_integers(vector<int> lst);

int main() {
    vector<int> input = {3, -2, 9, -5, 1};
    vector<int> expected_output = {-2, 1};
    
    vector<int> result = largest_smallest_integers(input);

    if(result == expected_output){
        std::cout << "Output is as expected." << std::endl;
    } else {
        std::cout << "Output is not as expected." << std::endl;
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