#include <unordered_set>

bool triples_sum_to_zero(vector<int> l){
    unordered_set<int> s(l.begin(), l.end());
    int n = l.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = l[i] + l[j];
            if (s.count(-sum) && (l[i] != -sum && l[j] != -sum)) {
                return true;
            }
        }
    }

    return false;
}