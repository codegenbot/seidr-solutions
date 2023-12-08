#include <iostream>
#include <vector>

std::vector<int> findLeaders(const std::vector<int>& arr) {
    std::vector<int> leaders;
    int n = arr.size();
    int maxRight = arr[n - 1];
    leaders.push_back(maxRight);

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            maxRight = arr[i];
            leaders.push_back(maxRight);
        }
    }

    std::reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::vector<int> result = findLeaders(arr);

    std::cout << result.size() << std::endl;
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}