#include <vector>

using namespace std;

bool triples_sum_to_zero(vector<int> l) {
    for (int i = 0; i < l.size(); i++) {
        for (int j = i + 1; j < l.size(); j++) {
            int target = -(l[i] + l[j]);
            for (int k = j + 1; k < l.size(); k++) {
                if (l[k] == target) return true;
            }
        }
    }
    return false;
}