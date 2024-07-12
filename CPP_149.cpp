#include <algorithm>
#include <vector>
#include <string>
#include <cctype>

std::vector<std::string> sorted_list_sum(const std::vector<std::string>& lst) {
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
             if (std::tolower(a.at(0)) != std::tolower(b.at(0))) {
                 return std::tolower(a.at(0)) < std::tolower(b.at(0));
             } else {
                 return a.length() < b.length();
             }
         });
    return result;
}