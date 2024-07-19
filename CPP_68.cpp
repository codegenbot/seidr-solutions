#include <vector>
#include <cassert>

using namespace std;

vector<int> pluck(vector<int> nums) {
    return nums.empty() ? nums : vector<int>(1, nums.front());
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), {}));
    
    return 0;
}