#include <vector>
using namespace std;

bool triples_sum_to_zero(vector<int> l) {
    for (int i = 0; i < l.size(); i++) {
        for (int j = i + 1; j < l.size(); j++) {
            int target = -l[i] - l[j];
            bool found = false;
            for (int k = 0; k < l.size(); k++) {
                if (k != i && k != j && l[k] == target) {
                    found = true;
                    break;
                }
            }
            if (found) return true;
        }
    }
    return false;
}