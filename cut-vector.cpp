std::pair<std::vector<int>, std::vector<int>> findCutVector(const std::vector<int>& vec) {
    int n = vec.size();
    int totalSum = std::accumulate(vec.begin(), vec.end(), 0);
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

    return {std::vector<int>(vec.begin(), vec.begin() + cutIndex + 1),
            std::vector<int>(vec.begin() + cutIndex + 1, vec.end())};
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    auto result = findCutVector(vec);

    for (int num : result.first) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    for (int num : result.second) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}