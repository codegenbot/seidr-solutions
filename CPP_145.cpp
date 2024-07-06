#include <algorithm>
#include <vector>
#include <string>

bool issame(vector<int> a,vector<int>b){
    int sumA = 0, sumB = 0;
    for (char c : to_string(a[0])) sumA += c - '0';
    for (char c : to_string(b[0])) sumB += c - '0';
    return sumA == sumB && a.size() == b.size();
}

vector<int> order_by_points(vector<int> nums) {
    auto compare = [&](int a, int b) {
        if (issame({a},{b})) return 0;
        int sumA = 0, sumB = 0;
        for (char c : to_string(a)) sumA += c - '0';
        for (char c : to_string(b)) sumB += c - '0';
        if (sumA != sumB) return sumA - sumB > 0 ? 1 : -1;
        return distance(nums.begin(), find(nums.begin(), nums.end(), a)) -
               distance(nums.begin(), find(nums.begin(), nums.end(), b));
    };
    sort(nums.begin(), nums.end(), compare);
    return nums;
}

int main(){
    assert (issame(order_by_points({0,6,6,-76,-21,23,4}) , {-76, -21, 0, 4, 23, 6, 6}));
}