#include <iostream>
#include <vector>
#include <unordered_set>

bool triples_sum_to_zero(vector<int> l) {
    unordered_set<int> s;
    int n = l.size();
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            int sum = l[i] + l[j];
            if (s.find(-sum) != s.end()) {
                return true;
            }
        }
        s.insert(l[i]);
    }
    return false;
}

int main() {
    vector<vector<int>> testCases = {
        {1, 3, 5, 0},
        {1, 3, -2, 1},
        {1, 2, 3, 7},
        {2, 4, -5, 3, 9, 7},
        {1}
    };

    for (auto testCase : testCases) {
        cout << boolalpha << triples_sum_to_zero(testCase) << endl;
    }

    return 0;
}