#include <vector>
#include <algorithm>
#include <string>
#include <iostream>

bool issame(std::vector<std::string> v1, std::vector<std::string> v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> sorted_list_sum(const std::vector<std::string>& lst) {
    std::vector<std::string> result;

    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
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
    std::vector<std::string> lst = {"apple", "banana", "hello", "world", "foo"};
    if (issame(lst, lst)) {
        std::vector<std::string> output = sorted_list_sum(lst);
        for (const auto& str : output) {
            std::cout << str << std::endl;
        }
    } else {
        std::cout << "Lists are not the same" << std::endl;
    }

    return 0;
}