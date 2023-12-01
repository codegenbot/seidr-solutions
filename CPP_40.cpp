#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool triples_sum_to_zero(vector<int> l) {
    int n = l.size();
    unordered_set<int> s;

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                int sum = l[i] + l[j] + l[k];
                if (sum == 0) {
                    return true;
                }
                s.insert(sum);
            }
        }
    }

    return false;
}
