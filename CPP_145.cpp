#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath> // For abs
#include <cassert> // For assert

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
    vector<pair<int, int>> num_with_index;
    for (int i = 0; i < nums.size(); ++i) {
        num_with_index.push_back({sum_of_digits(nums[i]), i});
    }
    sort(num_with_index.begin(), num_with_index.end(), [&](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first == b.first) return a.second < b.second;
        return a.first < b.first;
    });
    vector<int> sorted_nums;
    for (const auto& p : num_with_index) {
        sorted_nums.push_back(nums[p.second]);
    }
    return sorted_nums;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main() {
    assert (issame(order_by_points({0, 6, 6, -76, -21, 23, 4}) , vector<int>{-76, -21, 0, 4, 23, 6, 6}));
    cout << "All tests passed!" << endl;
    return 0;
}