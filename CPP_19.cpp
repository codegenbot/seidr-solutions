```
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string numbers = "three one five";
    vector<int> nums;
    for (auto& n : numbers) {
        if (n == ' ') continue;
        nums.push_back(stoi(to_string(n)));
    }
    sort(nums.begin(), nums.end());
    string sorted = "";
    for (auto& n : nums) {
        sorted += to_string(n) + " ";
    }
    cout << sorted << endl;
    return 0;
}
```