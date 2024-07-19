```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::vector<std::string>> sorted_list_sum(std::vector<std::string> lst) {
    std::vector<std::vector<std::string>> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            std::vector<std::string> temp;
            temp.push_back(str);
            result.push_back(temp);
        }
    }
    std::sort(result.begin(), result.end(),
              [](const std::vector<std::string>& a, const std::vector<std::string>& b) {
                  if (a[0].length() != b[0].length()) {
                      return a[0].length() < b[0].length();
                  } else {
                      return a[0] < b[0];
                  }
              });
    return result;
}

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}