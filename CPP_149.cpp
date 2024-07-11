#include <algorithm>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& c) {
    return a == c;
}

std::vector<std::string> sorted_list_sum(std::pmr::memory_resource* pmr, const std::vector<std::string>& lst) { 
    std::vector<std::string>(pmr) result;

    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    std::sort(result.begin(), result.end(),
              [&pmr](const std::string(pmr)& a, const std::string(pmr)& b) { 
                  if (a.size() != b.size()) {
                      return a.size() < b.size();
                  } else {
                      return a < b;
                  }
              });

    return result;
}

int main() {
    std::pmr::memory_resource* pmr = new std::pmr::pooled_memory_resource();
    std::vector<std::string>(pmr) lst = {"apple", "banana", "cherry"};
    std::vector<std::string> result = sorted_list_sum(pmr, lst);
    for (const auto& str : result) {
        std::cout << str << " ";
    }
    delete pmr;
    return 0;
}