#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vec[i];
    }

    int best_spot = 0;
    int min_diff = abs(vec[0] - vec[n-1]);
    for (int i = 0; i < n-1; ++i) {
        int diff = abs(vec[i] - vec[i+1]);
        if (diff < min_diff) {
            min_diff = diff;
            best_spot = i;
        }
    }

    std::vector<int> subvector1(vec.begin(), vec.begin() + best_spot + 1);
    std::vector<int> subvector2(vec.begin() + best_spot + 1, vec.end());

    for (int x : subvector1) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    for (int x : subvector2) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}