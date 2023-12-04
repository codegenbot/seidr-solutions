```
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string numbers = "three one five";
    vector<string> nums;
    for (auto& n : numbers) {
        if (n == ' ') continue;
        nums.push_back(std::to_string(n));
    }
    sort(nums.begin(), nums.end());
    string sorted = "";
    for (auto& n : nums) {
        sorted += n + " ";
    }
    cout << sorted << endl;
    return 0;
}
```