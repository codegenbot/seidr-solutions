#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
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

std::vector<int> get_positive(const std::vector<int>& l) {
    std::vector<int> result;
    for (int num : l) {
        if (num > 0) {
            result.push_back(num); 
        }
    }
    return result;
}

int main() {
    assert(issame(get_positive({}), {}) == true);
    return 0;
}