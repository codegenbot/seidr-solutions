#include <iostream>
using namespace std;

int count_nums(vector<int> nums) {
    int result = 0;
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] % 2 == 1)
            result++;
    }
    return result;
}

int main() {
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cout << "Enter integer #" << i+1 << ": ";
        cin >> nums[i];
    }
    int result = count_nums(nums);
    cout << "Result: " << result << endl;
    return 0;
}