```
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> nums = {5, 7};
    int target = 12;
    vector<int> result = findPair(nums, target);
    cout << "The two elements that sum to " << target << " are: ";
    for (auto it : result) {
        cout << it << " ";
    }
    cout << endl;
}
```