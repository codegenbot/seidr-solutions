#include <iostream>
#include <vector>
#include <limits>

using namespace std;

long long minSubArraySum(vector<long long> nums){
    long long min_sum = numeric_limits<long long>::max(); // Initialize minimum sum as maximum possible value
    long long current_sum = 0;
    
    for(long long num : nums){ 
        current_sum += num;
        
        if(current_sum < min_sum) // Update the minimum sum
            min_sum = current_sum;
        
        if(current_sum > 0) // Reset current sum to 0 when it becomes positive
            current_sum = 0;    
    }
    
    return min_sum;
}

int main() {
    vector<long long> nums;
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    for(int i=0; i<n; i++) {
        long long num;
        cout << "Enter element " << (i+1) << ": ";
        cin >> num;
        nums.push_back(num);
    }
    
    long long min_sum = minSubArraySum(nums);
    cout << "Minimum sum of subarray is: " << min_sum << endl;

    return 0;
}