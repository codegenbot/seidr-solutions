#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool issame(std::vector<std::vector<std::string>> a, std::vector<std::vector<std::string>> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(!issame(a[i], b[i])) return false;
    }
    return true;
}

std::vector<std::vector<std::string>> filter_by_substring(std::vector<std::vector<std::string>> input, std::string sub) {
    std::vector<std::vector<std::string>> result;
    for(auto& vec : input) {
        bool found = false;
        for(auto& str : vec) {
            if(str.find(sub) != std::string::npos) {
                found = true;
                break;
            }
        }
        if(found) {
            result.push_back(vec);
        }
    }
    return result;
}

int main2() {
    std::vector<std::vector<std::string>> input = {{"grunt"}, {"trumpet"}, {"prune"}, {"gruesome"}};
    std::string sub = "run";
    std::vector<std::vector<std::string>> expected = {{{"grunt", "prune"}}};

    if (!issame(filter_by_substring(input, sub), expected)) {
        std::cerr << "Error: Filtered result does not match expected output." << std::endl;
        return 1;
    }
    return 0;
}