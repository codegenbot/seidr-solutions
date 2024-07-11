```cpp
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    for (int i = 0; i < a.size() && i < b.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return a.size() == b.size();
}

std::vector<std::vector<std::string>> sorted_list_sum(std::vector<std::vector<std::string>> lst) {
    std::vector<std::vector<std::string>> result;

    for (const auto& str : lst) {
        if (str[0].length() % 2 == 0)
            result.push_back(str);
    }

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
    assert(issame({{"aaaa", "bbbb"}, {"cc", "dd"}}, {{"ccc", "dd"}, {"aaaa", "bbbb"}}));
}