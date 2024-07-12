#include <vector>
bool pairs_sum_to_zero(std::vector<int> l) {
    set<int> s(l.begin(), l.end());
    for (int i = 0; i < s.size(); i++) {
        int complement = -s[i];
        if (find(s.begin(), s.end(), complement) != s.end() && s[i] != complement) {
            return true;
        }
    }
    return false;
}