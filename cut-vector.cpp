#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& vec) {
    int min_diff = INT_MAX;
    int cut_index = -1;

    for (int i = 0; i < vec.size() - 1; ++i) {
        long long sum_left = 0, sum_right = 0;
        for (int j = 0; j <= i; ++j) {
            sum_left += vec[j];
        }
        for (int j = i + 1; j < vec.size(); ++j) {
            sum_right += vec[j];
        }

        if (sum_left == sum_right) {
            return {{vec[0], vec[0]}, vec.substr(1)};
        } else {
            int diff = abs(sum_left - sum_right);
            if (diff < min_diff) {
                min_diff = diff;
                cut_index = i;
            }
        }
    }

    // If no equal or minimally different subvectors found, return the first element and the rest of the vector
    return {{vec[0]}, vec.substr(1)};
}

int main() {
    int num;
    std::cin >> num;

    std::vector<int> vec;
    while (num--) {
        int x;
        std::cin >> x;
        vec.push_back(x);
    }

    auto res = cutVector(vec);

    for (int x : res.first) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    for (int x : res.second) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    return 0;
}