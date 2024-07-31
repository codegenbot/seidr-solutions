#include <vector>
#include <cassert>

bool issame(const std::std::vector<int>& a, const std::std::vector<int>& b) {
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

std::std::vector<int> incr_list(const std::std::vector<int>& input) {
    std::std::vector<int> output;
    for (int num : input) {
        output.push_back(num + 1);
    }
    return output;
}