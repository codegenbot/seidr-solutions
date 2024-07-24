#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(std::vector<int> v) {
    int minDiff = INT_MAX;
    int splitIndex = 0;

    for (int i = 1; i < v.size(); i++) {
        int diff = abs(v[i] - v[0]);
        if (diff <= minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }

    return {{v[0]}, {v[0]}};
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    std::pair<std::vector<int>, std::vector<int>> result = cutVector(v);

    for (int num : result.first) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    for (int num : result.second) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}