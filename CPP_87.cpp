#include <vector>

bool issame(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b);

bool issame(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b) {
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
    std::vector<std::vector<int>> lst = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int x = 5;
    std::vector<std::vector<int>> result = get_row(lst, x);

    std::vector<std::vector<int>> expected = {{1, 1}};
    if (issame(result, expected)) {
        std::cout << "Test Passed" << std::endl;
    } else {
        std::cout << "Test Failed" << std::endl;
    }

    return 0;
}