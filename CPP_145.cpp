#include <algorithm>
#include <vector>
#include <string>

std::vector<int> order_by_points(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end(),
              [&nums](int a, int b) -> bool { 
                  return to_string(a).size() + to_string(abs(a)).size() != 
                         to_string(b).size() + to_string(abs(b)).size(); 
              });
    return nums;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    return (std::accumulate(a.begin(), a.end(), 0,
        [&b](int acc, int i){return acc + (i == 0 || a[i-1] <= b[i-1]) ? 0 : 1;}) == 0);
}

#include <cassert>

int main() {
    assert(issame(order_by_points({0,6,6,-76,-21,23,4}), {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}