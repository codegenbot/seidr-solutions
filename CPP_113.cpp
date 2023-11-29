#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> odd_count(std::vector<std::string> lst);

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(odd_count({"271", "137", "314"}), {
        "the number of odd elements 1 in the string \"271\" of the input.",
        "the number of odd elements 2 in the string \"137\" of the input.",
        "the number of odd elements 1 in the string \"314\" of the input."
    }));
    return 0;
}

std::vector<std::string> odd_count(std::vector<std::string> lst){
    std::vector<std::string> result;
    for(const auto& str : lst) {
        int count = 0;
        for(const auto& c : str) {
            if((c - '0') % 2 != 0) {
                count++;
            }
        }
        result.push_back("the number of odd elements " + std::to_string(count) + " in the string \"" + str + "\" of the input.");
    }
    return result;
}