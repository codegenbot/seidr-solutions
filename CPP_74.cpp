#include <vector>
#include <string>

bool issame(const vector<vector<string>>& a, const vector<vector<string>>& b) {
    if (b.size() == 0) return true;
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

int total_match(const vector<vector<string>>& v) {
    int sum = 0;
    for (const auto& vec : v) {
        for (const auto& s : vec) {
            sum += s.size();
        }
    }
    return sum;
}