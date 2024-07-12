#include <algorithm>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& vec1, const std::vector<std::string>& vec2) {
    if (vec1.size() != vec2.size()) return false;
    for (const auto& str : vec1)
        if (!std::count(vec2.begin(), vec2.end(), std::string(str).toLowerCase())) return false;
    return true;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    std::vector<std::string> result = lst;
    for (auto it = result.begin(); it != result.end();) {
        if (it->length() % 2 == 1) {
            it = result.erase(it);
        } else {
            ++it;
        }
    }
    sort(result.begin(), result.end(),
         [](const std::string& a, const std::string& b) {
             if (a.length() != b.length()) return a.length() < b.length();
             else return a < b;
         });
    return result;
}