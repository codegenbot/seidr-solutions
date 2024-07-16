#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> tri(int n) {
    std::vector<int> result;
    for (int i = 0; i < n; ++i) {
        result.push_back(i);
    }
    return result;
}

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

int main() {
    std::vector<int> result = tri(5);
    assert(issame(result, {0, 1, 2, 3, 4}));
    return 0;
}