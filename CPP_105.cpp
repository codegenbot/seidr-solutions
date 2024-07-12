#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
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
    std::vector<std::pair<std::string, int>> input = {{"Nine", 9}, {"Eight", 8}, {"Four", 4}};
    assert(issame(by_length(input), {"Nine", "Eight", "Four"}));
    return 0;
}