#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& input) {
    int n = input.size();
    int minDiff = INT_MAX;
    int cutIndex = -1;

    // Find the spot where the difference is as small as possible
    for (int i = 0; i < n - 1; i++) {
        int diff = abs(std::accumulate(input.begin(), input.begin() + i + 1, 0) -
                       std::accumulate(input.begin() + i + 1, input.end(), 0));
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    // Split the vector into two subvectors at the cutIndex
    std::vector<int> subvector1(input.begin(), input.begin() + cutIndex + 1);
    std::vector<int> subvector2(input.begin() + cutIndex + 1, input.end());

    return std::make_pair(subvector1, subvector2);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> input(n);
    for (int i = 0; i < n; i++) {
        std::cin >> input[i];
    }

    std::pair<std::vector<int>, std::vector<int>> result = cutVector(input);

    // Print the resulting subvectors
    for (int num : result.first) {
        std::cout << num << std::endl;
    }
    for (int num : result.second) {
        std::cout << num << std::endl;
    }

    return 0;
}