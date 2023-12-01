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