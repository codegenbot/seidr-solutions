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

std::vector<int> tri(int n) {
    std::vector<int> result = {0, 1};
    for (int i = 2; i < n; i++) {
        result.push_back(result[i - 1] + result[i - 2]);
    }
    return result;
}

int main() {
    // Your main code here
    return 0;
}