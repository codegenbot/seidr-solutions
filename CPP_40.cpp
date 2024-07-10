#include <vector>
#include <algorithm>

using namespace std;

bool triples_sum_to_zero(vector<int> l) {
    sort(l.begin(), l.end());
    for (int i = 0; i < l.size() - 2; i++) {
        int j = i + 1;
        int k = l.size() - 1;
        while (j < k) {
            int sum = l[i] + l[j] + l[k];
            if (sum > 0) {
                k--;
            } else if (sum < 0) {
                j++;
            } else {
                return true;
            }
        }
    }
    return false;
}