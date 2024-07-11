#include <algorithm>
#include <vector>
#include <string>

bool issame(const std::vector<std::vector<std::string>>& a, const std::vector<std::vector<std::string>>& b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::string> sorted_list_sum(std::vector<std::vector<std::string>> lst) { 
    if (lst.empty()) {
        return {};
    }

    std::vector<std::string> result;

    for (const auto& str : lst[0]) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    if (result.empty()) {
        throw std::runtime_error("The input list is empty or contains only odd-length strings.");
    }

    std::sort(result.begin(), result.end(),
              [](const std::string& a, const std::string& b) { 
                  if (a.size() != b.size()) {
                      return a.size() < b.size();
                  } else {
                      return a < b;
                  }
              });

    return result;
}