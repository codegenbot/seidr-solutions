#include <set>
#include <vector>

using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (int i = 0; i != s.end(); i++) { 
        int complement = -s[i];
        if (find(s.begin() + i, s.end(), complement) != s.end()) {
            return true;
        }
    }
    return false;
}

int main() {
    assert(pairs_sum_to_zero({-3, 9, -1, 4, 2, 31}) == false);
    // test the function
    return 0;
}