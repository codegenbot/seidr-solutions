#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& vec) {
    int min_diff = INT_MAX;
    int cut_index = -1;

    for (int i = 0; i < vec.size() - 1; ++i) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; ++j) left_sum += vec[j];
        for (int j = i + 1; j < vec.size(); ++j) right_sum += vec[j];

        if (left_sum == right_sum || abs(left_sum - right_sum) < min_diff) {
            min_diff = abs(left_sum - right_sum);
            cut_index = i;
        }
    }

    return {{vec.begin(), vec.begin() + cut_index}}, {vec.begin() + cut_index, vec.end()}};
}

int main() {
    std::vector<int> vec;
    int n;
    std::cin >> n;
    vec.resize(n);
    for (int i = 0; i < n; ++i) std::cin >> vec[i];

    std::pair<std::vector<int>, std::vector<int>> result = cutVector(vec);

    std::cout << "[";
    for (int x : result.first) std::cout << x << " ";
    std::cout << "]\n[";
    for (int x : result.second) std::cout << x << " ";
    std::cout << "]\n";

    return 0;
}