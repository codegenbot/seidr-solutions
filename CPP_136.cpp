#include <iostream>
#include <vector>
#include <climits>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> largestSmallestIntegers(std::vector<int> lst){
    std::vector<int> result = {0, 0};
    int largestNegative = INT_MIN;
    int smallestPositive = INT_MAX;
    
    for(int num : lst){
        if(num < 0 && num > largestNegative){
            largestNegative = num;
        } else if(num > 0 && num < smallestPositive){
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

int main(){
    assert(issame(largestSmallestIntegers({-6, -4, -4, -3, -100, 1}), {-3, 1}));

    return 0;
}