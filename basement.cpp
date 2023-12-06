```
#include <vector>
#include <iostream>
using namespace std;

int findNegativeSumIndex(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> input = {-1, 100};
    int output = findNegativeSumIndex(input);
    cout << "Output: " << output << endl;
    return 0;
}
```