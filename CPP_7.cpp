```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::vector<std::string>> filter_by_substring(std::vector<std::vector<std::string>> input, std::string sub) {
    std::vector<std::vector<std::string>> result;
    for(auto &v : input) {
        bool same = true;
        for(auto &s : v) {
            if(s.find(sub) == std::string::npos) {
                same = false;
                break;
            }
        }
        if(same) result.push_back(v);
    }
    return result;

}

int main() {
    std::vector<std::vector<std::string>> input = {{"grunt"}, {"trumpet"}, {"prune"}, {"gruesome"}};
    std::string sub = "run";
    if (!issame(filter_by_substring(input, sub), {{"grunt"}, {"prune"}})) {
        std::cerr << "Error: Filtered result does not match expected output." << std::endl;
        return 1;
    }
    return 0;
}