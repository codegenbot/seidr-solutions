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
             size_t len_a = a.length();
             size_t len_b = b.length();
             if (len_a != len_b)
                 return len_a < len_b;
             for (size_t i = 0; i < len_a; ++i) {
                 if (std::tolower(a[i]) < std::tolower(b[i]))
                     return true;
                 else if (std::tolower(a[i]) > std::tolower(b[i]))
                     return false;
             }
             return a < b;
         });
    return result;
}