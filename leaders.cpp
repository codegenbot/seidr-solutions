```
#include <vector>
#include <iostream>
using namespace std;

// Function to find leaders in a vector
vector<int> leaders(vector<int> nums) {
    // ... (same as before)
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    cout << "Leaders: ";
    for (auto leader : leaders(nums)) {
        cout << leader << " ";
    }
    cout << endl;
}
```