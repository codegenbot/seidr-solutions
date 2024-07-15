#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int>b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

void remove_duplicates(const std::vector<int>& vec) {
    std::vector<int> temp = vec;
    std::sort(temp.begin(), temp.end());
    temp.erase(std::unique(temp.begin(), temp.end()), temp.end());
}

int main() {
    std::vector<int> input = {1, 2, 3, 2, 4, 3, 5};
    remove_duplicates(input);
    assert(issame(input, std::vector<int>{1, 4, 5}));
    
    return 0;
}