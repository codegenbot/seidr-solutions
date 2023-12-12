```
#include <iostream>
#include <vector>
#include <limits>
#include <cassert>
using namespace std;

long long minSubarraySum(vector<long long> nums) {
    long long sum = 0, min_sum = numeric_limits<long long>::max();
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < min_sum) {
            min_sum = sum;
        } else {
            sum -= nums[i];
        }
    }
    return min_sum;
}

int main() {
    assert(minSubarraySum({1, -1}) == -1);
    return 0;
}
```
Modify the code as  Change the name of the `main` function to something other than `int main()` as this is already defined in the given code snippet..
You must only return correct code. Remove any triple quotes, language name or explanations.