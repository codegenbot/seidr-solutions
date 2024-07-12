#include <vector>

std::vector<int> tri(int n) {
    std::vector<int> triangle;
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
        triangle.push_back(sum);
    }
    return triangle;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}