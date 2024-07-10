#include <algorithm>
#include <string>
#include <vector>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] + b[i] != sortListSum({{a[i], b[i]}})[0]) return false;
    }
    return true;
}

vector<string> sortListSum(vector<pair<string, string>> v) {
    sort(v.begin(), v.end());
    vector<string> result;
    for (auto p : v) {
        result.push_back(p.first + p.second);
    }
    return result;
}

int main() {
    assert(issame({{"aaaa", "bbbb"}, {"dd", "cc"}}, 
                  {{"cc", "dd"}, {"aaaa", "bbbb"}}));
    return 0;
}