#include <vector>
#include <algorithm>

using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    sort(l.begin(), l.end());
    for (int i = 0; i < l.size() - 1; i++) {
        if (l[i] + l[i+1] == 0)
            return true;
    }
    return false;
}