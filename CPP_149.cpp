#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        std::sort(a[i].begin(), a[i].end());
        std::sort(b[i].begin(), b[i].end());
        if (a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<std::vector<std::string>> sorted_list_sum(std::vector<std::string> lst) {
    std::vector<std::vector<std::string>> result;

    // Remove strings with odd lengths from the list
    for (const auto& str : lst) {
        if (str.length() % 2 == 0)
            result.push_back({str});
    }

    // Sort the resulted lists by length and then alphabetically
    std::sort(result.begin(), result.end(),
              [](const std::vector<std::string>& a, const std::vector<std::string>& b) {
                  if (a.size() != b.size())
                      return a.size() - b.size();
                  else
                      return a[0] < b[0];
              });

    return result;
}

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"ccc", "dd", "aaaa", "bbbb"}));
}