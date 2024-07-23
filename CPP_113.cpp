```
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> odd_count(std::vector<std::string> lst) {
    std::vector<std::string> result;
    for (int i = 0; i < lst.size(); i++) {
        int count = 0;
        for (char c : lst[i]) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        result.push_back("the number of odd elements " + std::to_string(count) + " in the string " + std::to_string(i+1));
    }
    return result;
}

int main() {
    std::vector<std::string> lst = {"271", "137", "314"};
    if (!issame(odd_count(lst), { "the number of odd elements 2 in the string 1", 
                                 "the number of odd elements 1 in the string 2", 
                                 "the number of odd elements 0 in the string 3"}))
        return 1;
    return 0;
}