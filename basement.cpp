#include <iostream>
#include <vector>
using namespace std;

int basement(vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return 0;
}

int main() {
    vector<int> test_input = {2, 3, -1, 5, -7};
    int result = basement(test_input);
    cout << "Result: " << result << endl;
    return 0;
}