```cpp
#include <vector>
#include <algorithm>

int issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (std::equal(a.begin(), a.end(), b.begin(), b.end())) {
        return 1; 
    } else {
        return 0; 
    }
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
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