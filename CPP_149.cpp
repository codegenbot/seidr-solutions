```
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::string& s1, const std::string& s2) {
    return s1.length() == s2.length();
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
             if (a.length() == b.length()) {
                 return a < b;
             } else {
                 return a.length() < b.length();
             }
         });
    return result;
}

int main() {
    // Your code here
}