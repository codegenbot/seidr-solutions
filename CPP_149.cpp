#include <algorithm>
#include <vector>
#include <string>

bool issame(const std::string& a, const std::string& b) {
    if (a.length() != b.length()) {
        return false;
    }
    for (int i = 0; i < a.length(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    for (const auto& str : lst) {
        if (issame(str, "sum")) {
            int sum = 0;
            for (char c : str) {
                sum += c - '0';
            }
            result.push_back(to_string(sum));
        } else if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    sort(result.begin(), result.end());
    return result;
}