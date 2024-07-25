```
#include <iostream>
#include <vector>
#include <climits>
#include <cassert>

long long minSubArraySum(std::vector<long long> nums){
    long long minSum = LLONG_MAX;
    long long currentSum = 0;

    for(long long num : nums){
        currentSum += num;
        if(currentSum < minSum) minSum = currentSum;
        if(currentSum > 0) currentSum = 0;
    }

    return minSum;
}

int main(){
    assert(minSubArraySum({1, -1}) == -1);
    std::vector<long long> numbers; 
    int n; 
    std::cout << "Enter the number of elements in your array: ";
    std::cin >> n;
    for(int i = 0; i < n; ++i){
        long long num; 
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num; 
        numbers.push_back(num);
    }
    long long result = minSubArraySum(numbers); 
    std::cout << "Minimum subarray sum: " << result << std::endl;
}