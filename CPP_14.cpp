#include <vector>
#include <string>

bool issame(const std::vector<std::string>& vec1, const std::vector<std::string>& vec2) {
    if (vec1.size() != vec2.size()) {
        return false;
    }
    for (size_t i = 0; i < vec1.size(); i++) {
        if (vec1[i] != vec2[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> all_prefixes(std::string str);

std::vector<std::string> all_prefixes(std::string str){
    std::vector<std::string> result;
    for (int i = 1; i <= str.size(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    // Your main function code here
    return 0;
}