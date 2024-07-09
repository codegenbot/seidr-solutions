#include <vector>
#include <algorithm>

using namespace std;

bool triples_sum_to_zero(vector<int> l) {
    for (int i = 0; i < l.size(); i++) {
        int sum = 0;
        for (int j = i + 1; j < l.size(); j++) {
            set<int> s;
            for (int k = j + 1; k < l.size(); k++) {
                s.insert(l[k]);
                if (s.size() == 3 && *s.rbegin() + *s.begin() + *s.count(-(*s.rbegin())) == 0) {
                    return true;
                }
            }
        }
    }
    return false;
}