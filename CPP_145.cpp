#include <algorithm>
#include <vector>
#include <string>
#include <numeric>

bool issame(vector<int> a,vector<int>b){
    int sumA = std::accumulate(cbegin(a), cend(a),0,[&](int x,int y){return (x-y)*(x-y);});
    int sumB = std::accumulate(cbegin(b), cend(b),0,[&](int x,int y){return (x-y)*(x-y);});
    return sumA == sumB && a.size() == b.size();
}

vector<int> order_by_points(vector<int> nums) {
    auto compare = [&nums](int a, int b) {
        if (issame({a},{b})) return 0;
        int sumA = std::accumulate(cbegin(to_string(a)), cend(to_string(a)),0,[&](char x,int y){return (x-y)*(x-y);});
        int sumB = std::accumulate(cbegin(to_string(b)), cend(to_string(b)),0,[&](char x,int y){return (x-y)*(x-y);});
        if (sumA != sumB) return sumA - sumB > 0 ? 1 : -1;
        return nums.size() - distance(nums.begin(), find(nums.begin(), nums.end(), a)) -
               distance(nums.begin(), find(nums.begin(), nums.end(), b));
    };
    sort(nums.begin(), nums.end(), compare);
    return order_by_points(nums);
}