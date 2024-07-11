```
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i])
            return false;
    return true;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    std::vector<std::string> result;

    // Remove strings with odd lengths from the list
    for (const auto& str : lst) {
        if (str.length() % 2 == 0)
            result.push_back(str);
    }

    // Sort the resulted list by length and then alphabetically
    std::sort(result.begin(), result.end(),
              [](const std::string& a, const std::string& b) {
                  if (a.length() != b.length())
                      return a.length() - b.length();
                  else
                      return a < b;
              });

    return result;
}

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"ccc", "dd", "aaaa", "bbbb"}));
}