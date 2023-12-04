```
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void sort_numbers(const string& numbers) {
    vector<int> nums;
    for (auto& num : numbers) {
        if (num >= '0' && num <= '9') {
            nums.push_back(num - '0');
        }
    }
    sort(nums.begin(), nums.end());
    string output = "";
    for (int i = 0; i < nums.size(); i++) {
        output += to_string(nums[i]) + " ";
    }
    return output;
}

int main() {
    string input = "six five four three two one zero";
    cout << sort_numbers(input) << endl;
    return 0;
}
```