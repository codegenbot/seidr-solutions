#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result;
    for(int i = 0; i < k; i++) {
        auto it = std::max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }
    return result;

}

int main() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> arr(n);
    for(int i=0; i<n; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Maximum elements: ";
    for (int i : maximum(arr, k)) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}