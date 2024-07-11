#include <algorithm>
#include <vector>
#include <string>

bool issame(const std::vector<std::vector<std::string>>& a, const std::vector<std::vector<std::string>>& b) {
    return a == b;
}

std::vector<std::string> sorted_list_sum(std::vector<std::vector<std::string>> lst) { 
    std::vector<std::string> result;

    for (const auto& str : lst) {
        int sum = 0;
        for (const auto& s : str) {
            sum += std::stoi(s);
        }
        if (sum % 2 == 0) {
            result.push_back((std::to_string(sum)));
        }
    }

    std::sort(result.begin(), result.end(),
              [](const std::string& a, const std::string& b) { 
                  return std::stoi(a) < std::stoi(b);
              });

    return result;
}