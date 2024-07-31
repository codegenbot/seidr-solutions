#include <vector>
#include <cassert>

std::vector<int> tri(int n) {
    std::vector<int> res;
    res.push_back(3);
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            res.push_back(1 + i / 2);
        } else {
            res.push_back(res[i - 1] + res[i - 2] + res[i - 3]);
        }
    }
    return res;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    // Example usage
    std::vector<int> result = tri(5);
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}