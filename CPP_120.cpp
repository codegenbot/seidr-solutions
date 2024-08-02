#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    int k;
    std::cout << "Enter the number of elements: ";
    std::cin >> k;

    std::vector<int> arr(k);
    std::cout << "Enter the elements: ";
    for (int i = 0; i < k; ++i)
        std::cin >> arr[i];

    std::vector<int> res = maximum(arr, k);

    std::cout << "The required output is: ";
    for (int i = 0; i < k; ++i)
        std::cout << res[i] << " ";

    return 0;
}

std::vector<int> maximum(vector<int> arr, int k) {
    vector<int> res(k);
    partial_sort(res.begin(), res.end(), [&arr](int a, int b) { return std::abs(a) < std::abs(b); });
    for (int i = 0; i < k; ++i)
        res[i] = (k - i - 1 >= 0 && arr[k - i - 1] > res[0]) ? arr[k - i - 1] : res[0];
    return res;
}