```cpp
#include <algorithm>
#include <vector>

using namespace std;

std::vector<int> order_by_points(std::vector<int> nums) {
    std::vector<int> res = nums;
    sort(res.begin(), res.end());
    return res;
}