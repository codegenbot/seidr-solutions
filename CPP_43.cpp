#include <algorithm>
using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    sort(l.begin(), l.end());
    for (int i = 0; i < l.size() - 1; i++) {
        int x = l[i];
        int y = l[l.size() - 1] - x;
        if (x + y == 0 && binary_search(l.begin(), l.end(), y) && x != y) {
            return true;
        }
    }
    return false;
}