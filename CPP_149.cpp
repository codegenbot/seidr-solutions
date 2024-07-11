```
#include <algorithm>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& c) {
    return a == c;
}

std::pmr::memory_resource* pmr;

std::vector<std::string>(pmr::memory_resource*) sorted_list_sum(std::vector<std::string>(pmr::memory_resource*) lst) { 
    std::vector<std::string>(pmr::memory_resource*) result;

    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    std::sort(result.begin(), result.end(),
              [](const std::string(pmr::memory_resource*)& a, const std::string(pmr::memory_resource*)& b) { 
                  if (a.size() != b.size()) {
                      return a.size() < b.size();
                  } else {
                      return *a < *b;
                  }
              });

    return result;
}

int main() {
    pmr = new std::pmr::pooled_memory_resource();
    std::vector<std::string>(pmr*) lst = {"hello", "world", "foo", "bar"};
    std::vector<std::string>(pmr*) sortedList = sorted_list_sum(lst);
    
    for (const auto& str : sortedList) {
        std::cout << str << std::endl;
    }

    return 0;
}