```cpp
#include <algorithm>
#include <vector>
#include <string>

std::vector<std::string> sorted_list_sum(const std::vector<std::string>& list) {
    std::vector<std::string> result;
    for (const auto& str : list) {
        if (str.size() > 0) {
            bool first = true;
            std::string temp;
            for (char c : str) {
                if (first) {
                    first = false;
                } else {
                    temp.push_back(c); 
                }
            }
            result.push_back(temp);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

bool issame(const std::vector<std::string>& a, const std::string& b) {
    if (a.size() != 1) return false;
    std::string temp = "";
    for (const auto& str : a) {
        if (!temp.empty()) 
            temp += str;
        else
            temp = str;
    }
    std::sort(b.begin(), b.end());
    return issame({temp}, {b});
}

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}