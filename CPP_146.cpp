#include <vector>
#include <algorithm>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;

}

int main() {
    std::vector<int> nums;
    int n; 
    cout << "Enter the number of elements: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        cout << "Enter element " << i << ": ";
        cin >> nums.push_back();
    }
    
    cout << "The count is: " << specialFilter(nums);
}