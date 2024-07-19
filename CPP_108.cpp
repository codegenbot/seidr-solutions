```cpp
#include <iostream>
#include <vector>

int count_nums(const std::vector<int>& nums) {
    int result = 0;
    for (int num : nums) {
        if (num % 2 == 1)
            result++;
    }
    return result;

}

int main() {
    using namespace std;
    
    cout << "Enter the number of integers: ";
    int n; 
    cin >> n;
    vector<int> nums(n);  
    for(int i = 0; i < n; i++) {
        cout << "Enter integer #" <<i+1<<": ";
        cin >> nums[i]; 
    }
    int result = count_nums(nums);
    cout << "Result: " << result << endl;
    
    return 0;
}