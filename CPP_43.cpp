#include <vector>
#include <algorithm>
#include <set>

using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    vector<int> s(l.begin(), l.end()); // Convert set to vector
    for (int i = 0; i < s.size(); i++) { 
        int complement = -s[i];
        if (find(std::next(s.begin(), i + 1), s.end(), complement) != s.end()) {
            return true;
        }
    }
    return false;
}