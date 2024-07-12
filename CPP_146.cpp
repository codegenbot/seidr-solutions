#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> nums.push_back(i);
    }
    cout << "The count is: " << specialFilter(nums) << endl;
    return 0;
}