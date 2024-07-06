#include <algorithm>
#include <vector>
#include <string>
#include <assert.h>

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
                    temp += c; 
                }
            }
            result.push_back(temp);
        }
    }
    
    // Create copies of the strings and sort them
    for (auto& str : result) {
        std::string sorted_str = str;
        std::sort(sorted_str.begin(), sorted_str.end());
        result[std::distance(result.begin(), find(result.begin(), result.end(), sorted_str))] = sorted_str;
    }
    
    return result;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}