#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>

using namespace std;

int digit_sum(int n) {
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
    for (int i = 0; i < nums.size(); ++i) {
        indexed_nums.push_back({nums[i], i});
    }
    
    sort(indexed_nums.begin(), indexed_nums.end(), [](pair<int, int> a, pair<int, int> b) {
        int sum_a = digit_sum(a.first);
        int sum_b = digit_sum(b.first);
        if (sum_a == sum_b) return a.second < b.second;
        return sum_a < sum_b;
    });
    
    vector<int> sorted_nums;
    for (auto &p : indexed_nums) {
        sorted_nums.push_back(p.first);
    }
    
    return sorted_nums;
}

int main() {
    vector<int> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    vector<int> sorted_nums = order_by_points(nums);
    for (int num : sorted_nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}