```
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Define the sort_numbers function
void sort_numbers(vector<int>& numbers) {
    // Use the built-in sort function to sort the vector
    sort(numbers.begin(), numbers.end());
}

int main() {
    string numbers = "three one five";
    vector<string> nums;
    for (auto& n : numbers) {
        if (n == ' ') continue;
        nums.push_back(n);
    }
    sort_numbers(nums);
    string sorted = "";
    for (auto& n : nums) {
        sorted += n + " ";
    }
    cout << sorted << endl;
    return 0;
}
```