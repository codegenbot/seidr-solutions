#include <vector>
#include <algorithm>

using namespace std;

bool triples_sum_to_zero(vector<int> l) {
    for (int i = 0; i < l.size(); i++) {
        for (int j = i + 1; j < l.size(); j++) {
            int target = -l[i] - l[j];
            if (find(l.begin(), l.end(), target) != l.end()) {
                return true;
            }
        }
    }
    return false;
}