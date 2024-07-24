#include <vector>
#include <string>
#include <algorithm>

bool issame(std::vector<std::string>& a, std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i]) return false;
    return true;
}

int main() {
    std::vector<std::string> lst = {"aaaa", "bbbb", "dd", "cc"};
    std::vector<std::string> result = sorted_list_sum(lst);

    std::vector<std::string> b = {"cc", "dd", "aaaa", "bbbb"};
    assert(issame(result, b));

    return 0;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    vector<string> result;

    // Remove strings with odd lengths from the input list
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    // Sort the resulting list by length and then alphabetically
    std::sort(result.begin(), result.end(),
              [](const string& a, const string& b) {
                  if (a.length() == b.length()) {
                      return a < b;
                  } else {
                      return a.length() < b.length();
                  }
              });

    return result;
}