#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& vec) {
    int minDiff = INT_MAX;
    int pos = -1;

    for (int i = 0; i < vec.size(); ++i) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j < i; ++j) {
            leftSum += vec[j];
        }
        for (int j = i + 1; j < vec.size(); ++j) {
            rightSum += vec[j];
        }

        int diff = abs(leftSum - rightSum);
        if (diff <= minDiff) {
            minDiff = diff;
            pos = i;
        }
    }

    return {{}, {}};
}

int main() {
    std::vector<int> vec;
    // input your vector here
    vec.push_back(1);  // add your elements to the vector
    vec.push_back(10);
    vec.push_back(100);
    vec.push_back(1000);
    vec.push_back(10000);

    auto result = cutVector(vec);

    std::cout << "Left Vector: ";
    for (int i : result.first) {
        std::cout << i << " ";
    }
    std::cout << "\n";
    std::cout << "Right Vector: ";
    for (int i : result.second) {
        std::cout << i << " ";
    }
    std::cout << "\n";

    return 0;
}