#include <iostream>
#include <vector>
using namespace std;

long long minSubArraySum(vector<long long> nums) {
    long long min_sum = INT_MAX; 
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
    int n;
    cin >> n;
    vector<long long> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << minSubArraySum(nums) << endl;
    return 0;
}