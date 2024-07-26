#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> sorted_list_sum(const vector<vector<int>>& lists) {
    vector<int> result;
    for (const auto& lst : lists) {
        int sum = 0;
        for (int num : lst) {
            sum += num;
        }
        result.push_back(sum);
    }
    sort(result.begin(), result.end());
    return result;
}

int main() {
    vector<vector<int>> lists = {{1, 2, 3}, {4, 5}, {6, 7, 8, 9}};
    vector<int> sums = sorted_list_sum(lists);
    for (int sum : sums) {
        cout << sum << " ";
    }
    return 0;
}