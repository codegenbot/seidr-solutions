#include <vector>
#include <algorithm>
#include <string>

bool issame(std::string s1, std::string s2) {
    return s1.size() == s2.size();
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    std::vector<std::string> result;
    for (const auto& str : lst) {
        if (issame(str, "sum")) {
            int sum = 0;
            for (char c : str) {
                sum += c - '0';
            }
            result.push_back(std::to_string(sum));
        } else {
            if (str.length() % 2 == 0) {
                result.push_back(str);
            }
        }
    }
    std::sort(result.begin(), result.end(),
              [](const std::string& a, const std::string& b) {
                  if (a.length() != b.length()) {
                      return a.length() < b.length();
                  } else {
                      return a < b;
                  }
              });
    return result;
}

int main() {
    std::vector<std::string> lst = {"hello", "world", "sum123", "foo", "bar"};
    std::vector<std::string> res = sorted_list_sum(lst);
    for (const auto& str : res) {
        std::cout << str << std::endl;
    }
    return 0;
}