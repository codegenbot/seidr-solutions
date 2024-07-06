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
            if (sum < 0) {
                j++;
            } else if (sum > 0) {
                k--;
            } else {
                // Check if this is the first zero sum or not
                if ((i > 0 && j > i - 1 && k < l.size() - 1)) {
                    while (j > i - 1 && k < l.size() - 1) {
                        if (l[i] == l[i - 1]) i++;
                        else if (l[k] == l[k + 1]) k--;
                        else break;
                    }
                }
                return true;
            }
        }
    }
    return false;
}