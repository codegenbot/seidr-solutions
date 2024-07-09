#include <vector>
using namespace std;

bool triples_sum_to_zero(vector<int> l) {
    int n = l.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            bool found = false;
            for (int k = j + 1; k < n; k++) {
                if (l[i] + l[j] + l[k] == 0) {
                    found = true;
                    break;
                }
            }
            if (found)
                return true;
        }
    }
    return false;
}