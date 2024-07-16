```cpp
#include <vector>
using namespace std;

int basement(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; ; i++) {
        sum += nums[i];
        if (sum < 0)
            return i;
    }
}

int main() {
    vector<int> test_case = {-1, -3, 5};
    cout << basement(test_case) << endl;
    return 0;
}