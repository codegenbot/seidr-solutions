#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

std::vector<int> tri(int n) {
    std::vector<int> result;
    if (n == 0) {
        result.push_back(0);
        return result;
    }
    result.push_back(3);
    if (n == 1) {
        return result;
    }
    result.push_back(1);
    if (n == 2) {
        return result;
    }
    
    for (int i = 3; i <= n; ++i) {
        if (i % 2 == 0) {
            result.push_back(1 + i / 2);
        } else {
            result.push_back(result[i - 1] + result[i - 2] + result[i - 3]);
        }
    }
    
    return result;
}

int main() {
    std::vector<int> expected = {0, 3, 1, 2, 7, 4, 11, 6, 15, 8};
    std::vector<int> result = tri(9);
    
    if (issame(expected, result)) {
        return 0;
    } else {
        return 1;
    }
}