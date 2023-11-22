#include <iostream>
#include <vector>
#include <climits>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& input) {
    int n = input.size();
    int minDiff = INT_MAX;
    int cutIndex = -1;

    // Calculate the sum of all elements in the vector
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += input[i];
    }

    // Calculate the difference between the sum of elements on the left and right side of the cut
    int leftSum = 0;
    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum;
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
        leftSum += input[i];
    }

    // Create the two resulting subvectors
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

    for (int i = 0; i < result.first.size(); i++) {
        std::cout << result.first[i] << std::endl;
    }
    for (int i = 0; i < result.second.size(); i++) {
        std::cout << result.second[i] << std::endl;
    }

    return 0;
}