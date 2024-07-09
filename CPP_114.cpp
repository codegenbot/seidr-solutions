#include <iostream>
#include <vector>
using namespace std;

long long minSubArraySum(vector<long long> nums) {
    long long min_sum = LLONG_MAX; 
    long long current_sum = 0;
    
    for(long long num : nums){ 
        current_sum += num;
        
        if(current_sum < min_sum) 
            min_sum = current_sum;
        
        if(current_sum > 0) 
            current_sum = 0;    
    }
    
    return min_sum;
}

int main() {
    vector<long long> nums;
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        long long num;
        cout << "Enter element " << (i+1) << ": ";
        cin >> num;
        nums.push_back(num);
    }
    
    long long min_sum = minSubArraySum(nums);
    cout << "The minimum sum of a subarray is: " << min_sum << endl;

    return 0;
}