#include <iostream>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vec[i];
        totalSum += vec[i];
    }

    int leftSum = 0;
    int minDiff = INT_MAX;
    int cutIndex = -1;

    for (int i = 0; i < n - 1; ++i) {
        leftSum += vec[i];
        int rightSum = totalSum - leftSum;
        int diff = std::abs(leftSum - rightSum);

        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    std::vector<int> leftSubvec(vec.begin(), vec.begin() + cutIndex + 1);
    std::vector<int> rightSubvec(vec.begin() + cutIndex + 1, vec.end());

    for (int num : leftSubvec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    for (int num : rightSubvec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}