#include<stdio.h>
#include<math.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int sum_of_digits(int n) {
    n = abs(n);
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> indexed_nums;
    for (int i = 0; i < nums.size(); i++) {
        indexed_nums.push_back({sum_of_digits(nums[i]), i});
    }
    sort(indexed_nums.begin(), indexed_nums.end(), [&](pair<int, int> a, pair<int, int> b) {
        if (a.first == b.first) return a.second < b.second;
        return a.first < b.first;
    });
    vector<int> sorted_nums;
    for (auto &p : indexed_nums) {
        sorted_nums.push_back(nums[p.second]);
    }
    return sorted_nums;
}