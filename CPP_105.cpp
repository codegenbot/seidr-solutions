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
    return 0; // Corrected this
}

int main() {
    std::vector<std::pair<std::string, int>> nums = {std::make_pair("Nine", 9), std::make_pair("Eight", 8), std::make_pair("Four", 4)};
    assert(issame(by_length(nums), {"Nine", "Eight", "Four"}));
    return by_length(nums);
}