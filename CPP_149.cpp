#include <algorithm>
#include <vector>
#include <string>
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
             auto alen = a.length();
             auto blen = b.length();
             if (alen != blen) return alen < blen;
             for (auto i = 0; i < alen; ++i) {
                 if (std::tolower(a[i]) < std::tolower(b[i]))
                     return true;
                 else if (std::tolower(a[i]) > std::tolower(b[i]))
                     return false;
             }
             return false;
         });
    return result;
}