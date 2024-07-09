#include <vector>
#include <iostream>

std::vector<int> cutVector(const std::vector<int>& vec) {
    int minDiff = INT_MAX;
    int pos = -1;

    for (int i = 0; i < vec.size() - 1; i++) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j <= i; j++) {
            leftSum += vec[j];
        }
        for (int j = i + 1; j < vec.size(); j++) {
            rightSum += vec[j];
        }

        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            pos = i;
        }
    }

    return {std::vector<int>(vec.begin(), vec.begin() + pos),
            std::vector<int>(vec.begin() + pos, vec.end())};
}

int main() {
    int num;
    std::cin >> num;
    std::vector<int> vec(1, num);
    for (int i = 0; i < 5; i++) {
        cin >> num;
        vec.push_back(num);
    }

    std::pair<std::vector<int>, std::vector<int>> result = cutVector(vec);

    cout << "First part: ";
    for (int i : result.first) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Second part: ";
    for (int i : result.second) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}