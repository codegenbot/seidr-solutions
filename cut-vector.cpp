#include <vector>

std::pair<std::vector<int>, std::vector<int>> cutVector(std::vector<int> v) {
    int n = v.size();
    long long diff = LLONG_MAX;

    for (int i = 0; i < n; i++) {
        long long leftSum = 0, rightSum = 0;

        for (std::size_t j = 0; j <= i; j++) {
            leftSum += v[j];
        }

        for (std::size_t j = i + 1; j < n; j++) {
            rightSum += v[j];
        }

        if (std::abs(leftSum - rightSum) == diff) {
            return {{v.begin(), v.begin() + i + 1}, {v.begin() + i + 1, v.end()}};
        } else if (std::abs(leftSum - rightSum) < diff) {
            diff = std::abs(leftSum - rightSum);
        }
    }

    return {{v.begin(), v.end()}, {v.begin(), v.end()}};
}

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    std::pair<std::vector<int>, std::vector<int>> result = cutVector(v);
    // process the result...
    return 0;
}