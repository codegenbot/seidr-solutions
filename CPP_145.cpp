#include <algorithm>
#include <vector>
#include <string>

bool issame(vector<int>, vector<int>) {
    // This function is not being called anywhere and can be safely removed.
    //return sumA == sumB && a.size() == b.size();
}

vector<int> order_by_points(vector<int> nums) {
    auto compare = [&](int a, int b) {
        if (a < b) return -1;
        if (a > b) return 1;
        return 0;
    };
    sort(nums.begin(), nums.end(), compare);
    return nums;
}

int main(){
    vector<int> result = order_by_points({0,6,6,-76,-21,23,4});
    assert (std::equal(result.begin(), result.end(),{-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}