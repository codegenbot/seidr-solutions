#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    arr.resize(k);
    return arr;
}

int main() {
    std::vector<int> inputArray = {1, 2, 3, -23, 243, -400, 0};
    int k = 0;
    std::cin >> k;

    std::vector<int> result = maximum(inputArray, k);

    for (int i : result) {
        std::cout << i << " ";
    }

    return 0;
}