#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(std::vector<int> vec) {
    int min_diff = INT_MAX;
    int cut_index = 0;

    for (int i = 1; i < vec.size(); i++) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; j++) {
            left_sum += vec[j];
        }
        for (int j = i; j < vec.size(); j++) {
            right_sum += vec[j];
        }

        if (left_sum == right_sum) {
            return {{}, vec};
        }

        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }

    std::vector<int> left_vec(vec.begin(), vec.begin() + cut_index);
    std::vector<int> right_vec(vec.begin() + cut_index, vec.end());
    return {left_vec, right_vec};
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> vec(n);

    for (int i = 0; i < n; i++) {
        std::cin >> vec[i];
    }

    auto result = cutVector(vec);
    std::cout << "Left side: ";
    for (int num : result.first) {
        std::cout << num << " ";
    }
    std::cout << "\n";
    std::cout << "Right side: ";
    for (int num : result.second) {
        std::cout << num << " ";
    }
    std::cout << "\n";
    
    return 0;
}