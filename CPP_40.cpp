#include <vector>
#include <algorithm>

using namespace std;

bool triples_sum_to_zero(vector<int> l) {
    sort(l.begin(), l.end());
    for (int i = 0; i < l.size() - 2; i++) {
        int j = i + 1;
        while (j < l.size()) {
            int k = l.size() - 1;
            while (k > j && l[i] + l[j] + l[k] > 0) {
                k--;
            }
            if (k >= j && l[i] + l[j] + l[k] == 0) {
                return true;
            }
            j++;
        }
    }
    return false;
}