#include <algorithm>
#include <vector>
using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    sort(l.begin(), l.end());
    for (int i = 0; i < l.size() - 1; i++) {
        int complement = -l[i];
        if (binary_search(l.begin() + i + 1, l.end(), complement)) {
            return true;
        }
    }
    return false;
}