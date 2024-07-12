#include <iostream>
#include <vector>

int main() {
    int count = 0;
    std::vector<int> nums;
    
    // Read input from user
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    
    count = specialFilter(nums);
    
    // Print output
    cout << "The number of elements that meet the condition is: " << count << endl;
    
    return 0;
}

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}