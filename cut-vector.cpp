#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& input) {
    int n = input.size();
    int diff = INT_MAX;
    int index = -1;

    // Calculate the difference between the sums of the left and right subvectors
    int leftSum = 0;
    int rightSum = 0;
    for (int i = 0; i < n; i++) {
        rightSum += input[i];
    }

    for (int i = 0; i < n; i++) {
        leftSum += input[i];
        rightSum -= input[i];

        int currDiff = abs(leftSum - rightSum);
        if (currDiff < diff) {
            diff = currDiff;
            index = i;
        }
    }

    // Create the two resulting subvectors
    std::vector<int> subvector1(input.begin(), input.begin() + index + 1);
    std::vector<int> subvector2(input.begin() + index + 1, input.end());

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