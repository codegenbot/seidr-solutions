#include <vector>
#include <algorithm>

using namespace std;

bool triples_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (int i = 0; i < s.size(); i++) {
        int j = 0, k = s.size() - 1;
        while (j < k) {
            int sum = s[i] + s[j] + s[k];
            if (sum == 0)
                return true;
            else if (sum < 0)
                j++;
            else
                k--;
        }
    }
    return false;
}