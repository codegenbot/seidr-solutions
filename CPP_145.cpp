#include <algorithm>
#include <cassert>
#include <vector>

using namespace std;

vector<int> order_by_points(vector<int> nums);

bool are_vectors_equal(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(are_vectors_equal(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), [](int a, int b) {
        // Implement sorting logic here
    });
    return nums;
}