```cpp
#include <vector>
#include <string>

using namespace std;

bool issame(const vector<vector<string>>& a, const vector<vector<string>>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (!issame(a[i], b[i])) return false;
    }
    return true;
}

vector<string> total_match(vector<vector<string>> lst1, vector<vector<string>> lst2) {
    int sum1 = 0;
    for (const auto& v : lst1) {
        for (const string& s : v) {
            sum1 += s.length();
        }
    }
    int sum2 = 0;
    for (const auto& v : lst2) {
        for (const string& s : v) {
            sum2 += s.length();
        }
    }
    if (sum1 < sum2) return {v.begin(), v.end()};
    else if (sum1 > sum2) return {v2.begin(), v2.end()};
    else return {lst1.begin(), lst1.end()};
}

int main() {
    assert(issame({{"this"}}, {}) == true);
    return 0;
}