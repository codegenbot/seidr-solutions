#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int by_length(std::vector<std::pair<std::string, int>> nums) {
    std::sort(nums.begin(), nums.end(), [](const auto& a, const auto& b) {
        return a.first.length() < b.first.length();
    });
    return 1; // Assuming the function should always return 1
}

int main() {
    return by_length({std::make_pair("Nine"), std::make_pair("Eight"), std::make_pair("Four")});
}