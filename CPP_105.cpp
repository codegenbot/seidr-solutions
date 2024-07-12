#include <vector>
#include <string>

bool IsSame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i].size() != b[i].size()) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> ByLength(std::vector<int> lengths) {
    std::vector<std::string> result;
    for (int length : lengths) {
        result.push_back(std::to_string(length));
    }
    return result;
}