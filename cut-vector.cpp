#include <iostream>
#include <vector>

std::vector<std::vector<int>> cutVector(std::vector<int> v) {
    int n = v.size();
    std::vector<std::vector<int>> res(2);

    long long totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += v[i];
    }

    long long halfSum = totalSum / 2;
    if (totalSum % 2 != 0) {
        halfSum++;
    }

    int minDiff = INT_MAX;
    int cutIndex = -1;

    for (int i = 0; i < n; i++) {
        long long runningSum = 0;
        for (int j = 0; j <= i; j++) {
            runningSum += v[j];
        }

        if (abs(runningSum - halfSum) < minDiff) {
            minDiff = abs(runningSum - halfSum);
            cutIndex = i + 1;
        }
    }

    res[0].resize(cutIndex);
    for (int j = 0; j < cutIndex; j++) {
        res[0].push_back(v[j]);
    }

    if (cutIndex < n) {
        res[1].resize(n - cutIndex);
        for (int j = 0; j < n - cutIndex; j++) {
            res[1].push_back(v[cutIndex + j]);
        }
    } else {
        res[1] = res[0];
    }

    return res;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    std::vector<std::vector<int>> res = cutVector(v);
    std::cout << "[";

    for (int i = 0; i < res[0].size(); i++) {
        std::cout << res[0][i];
        if (i < res[0].size() - 1) {
            std::cout << " ";
        }
    }

    std::cout << "] [";

    for (int i = 0; i < res[1].size(); i++) {
        std::cout << res[1][i];
        if (i < res[1].size() - 1) {
            std::cout << " ";
        }
    }

    std::cout << "]" << std::endl;

    return 0;
}