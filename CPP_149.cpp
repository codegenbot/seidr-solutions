#include <algorithm>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& c) {
    return a == c;
}

std::vector<std::string>(std::pmr::memory_resource()) sorted_list_sum(std::vector<std::string>(std::pmr::memory_resource()) lst) { 
    std::vector<std::string>(std::pmr::memory_resource()) result;

    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    std::sort(result.begin(), result.end(),
              [](const std::string(std::pmr::memory_resource())& a, const std::string(std::pmr::memory_resource())& b) { 
                  if (a.size() != b.size()) {
                      return a.size() < b.size();
                  } else {
                      return a < b;
                  }
              });

    return result;
}