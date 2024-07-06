#include <iostream>
#include <vector>

int specialFilter(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> nums;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    nums.resize(n);
    
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> nums[i];
    }
    
    int count = specialFilter(nums);
    
    cout << "Count: " << count << endl;
    return 0;
}