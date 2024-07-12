#include <vector>
#include <algorithm>
#include <cctype>

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
             if (std::tolower(a[0]) != std::tolower(b[0]))
                 return std::tolower(a[0]) < std::tolower(b[0]);
             for (size_t i = 1; i < a.size(); ++i) {
                 if (a[i] != b[i])
                     return a[i] < b[i];
             }
             return a.size() < b.size();
         });
    return result;
}