#include <vector>
#include <algorithm>
#include <cctype>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] > b[i]) return false;
        if (a[i] < b[i]) return true;
    }
    return true;
}

int sorted_list_sum(const std::vector<std::string>& vec) {
    int sum = 0;
    for (const auto& str : vec) {
        for (char c : str) {
            sum += static_cast<int>(c);
        }
    }
    return sum;
}

int main() {
    return 0;
}