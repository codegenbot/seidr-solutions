#include <vector>
#include <algorithm>

using namespace std;

bool triples_sum_to_zero(vector<int> l) {
    sort(l.begin(), l.end());
    for (int i = 0; i < l.size() - 2; i++) {
        int j = i + 1;
        while (j < l.size()) {
            int k = j + 1;
            while (k < l.size()) {
                if ((l[i] + l[j]) + l[k] == 0) {
                    return true;
                }
                k++;
            }
            j++;
        }
    }
    return false;
}