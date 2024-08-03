#include <vector>
using namespace std;

bool triples_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (int a : s) {
        set<int> s2(s);
        s2.erase(a);
        bool found = false;
        for (int b : s2) {
            s2.erase(b);
            for (int c : s2) {
                if (a + b + c == 0)
                    return true;
            }
        }
    }
    return false;
}