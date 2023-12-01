#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& v) {
    int n = v.size();
    int diff = std::abs(v[0] - v[n-1]);
    int cutIdx = 0;

    for (int i = 1; i < n-1; i++) {
        int currDiff = std::abs(v[i] - v[n-1]);
        if (currDiff < diff) {
            diff = currDiff;
            cutIdx = i;
        }
    }

    std::vector<int> subVec1(v.begin(), v.begin() + cutIdx + 1);
    std::vector<int> subVec2(v.begin() + cutIdx + 1, v.end());

    return std::make_pair(subVec1, subVec2);
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
        std::cout << num << std::endl;
    }

    for (int num : result.second) {
        std::cout << num << std::endl;
    }

    return 0;
}