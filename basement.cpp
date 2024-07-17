```c
#include <vector>
using namespace std;

int basement(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    vector<int> nums;
    int input;
    cout << "Enter a sequence of numbers separated by space:" << endl;
    while (cin >> input) {
        nums.push_back(input);
    }
    int result = basement(nums);
    if (result != -1) {
        cout << "Basement found at index " << result << endl;
    } else {
        cout << "No negative sum found." << endl;
    }
    return 0;
}