#include <vector>
using namespace std;

bool triples_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (int i = 0; i < s.size(); i++) {
        int a = s.at(i);
        set<int>::iterator it1 = s.begin();
        set<int>::iterator it2 = --it1;
        while (*it2 + *it1 != -a && ++it2 != s.end()) {
            it2++;
        }
        if (it2 != s.end() && *it2 + *it1 == -a) {
            return true;
        }
    }
    return false;
}