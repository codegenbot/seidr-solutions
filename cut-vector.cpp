#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& vec) {
    int minDiff = INT_MAX;
    int splitIndex = -1;

    for (int i = 0; i < vec.size() - 1; ++i) {
        int sumLeft = 0, sumRight = 0;
        for (int j = 0; j <= i; ++j) {
            sumLeft += vec[j];
        }
        for (int j = i + 1; j < vec.size(); ++j) {
            sumRight += vec[j];
        }

        int diff = abs(sumLeft - sumRight);
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }

    return {{vec.begin(), vec.begin() + splitIndex}, {vec.begin() + splitIndex, vec.end()}};
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> vec(n);
    for (auto& x : vec) {
        std::cin >> x;
    }

    auto result = cutVector(vec);

    cout << "First subvector: ";
    for (const auto& x : result.first) {
        cout << x << ' ';
    }
    cout << endl;

    cout << "Second subvector: ";
    for (const auto& x : result.second) {
        cout << x << ' ';
    }
    cout << endl;
}