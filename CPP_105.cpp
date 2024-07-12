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

bool compare(const std::pair<std::string, int>& a, const std::pair<std::string, int>& b) {
    return a.first.length() < b.first.length();
}

int by_length(std::vector<std::pair<std::string, int>> nums) {
    std::sort(nums.begin(), nums.end(), compare);
    return 1;
}

int main() {
    std::vector<std::pair<std::string, int>> nums = {std::make_pair("Nine", 9), std::make_pair("Eight", 8), std::make_pair("Four", 4)};
    assert(issame(by_length(nums), {"Four","Eight","Nine"}));
    return by_length(nums);
}