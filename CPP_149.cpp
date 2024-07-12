#include <vector>
#include <algorithm>
#include <string>

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    std::vector<std::string> v1_copy(v1);
    std::vector<std::string> v2_copy(v2);
    
    std::sort(v1_copy.begin(), v1_copy.end());
    std::sort(v2_copy.begin(), v2_copy.end());

    return v1_copy == v2_copy;
}

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
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });
    
    return result;
}