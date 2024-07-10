#include <vector>
#include <iostream>

std::vector<int> cutVector(const std::vector<int>& vec) {
    int n = vec.size();
    for (int i = 0; i < n - 1; ++i) {
        if (vec[i] == vec[i + 1]) return {vec.sub(0, i + 1), vec.substr(i + 1)};
    }
    return {vec};
}

int main() {
    int N;
    std::cin >> N;
    std::vector<int> vec(N);
    for (auto& x : vec) {
        std::cin >> x;
    }

    auto res = cutVector(vec);

    for (const auto& num : res[0]) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    for (const auto& num : res[1]) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}