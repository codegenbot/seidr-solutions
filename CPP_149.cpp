#include <algorithm>
#include <string>
#include <vector>
#include <initializer_list>

#include <stdexcept>

bool isSame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] + b[i] != sortListSum({{a[i], b[i]}})[0]) return false;
    }
    return true;
}

vector<string> sortListSum(vector<pair<string, string>> v) {
    vector<string> result;
    for (const auto& p : v) {
        result.push_back(p.first + p.second);
    }
    sort(result.begin(), result.end());
    return result;
}