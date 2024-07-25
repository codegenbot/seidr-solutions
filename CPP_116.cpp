#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sort_array(const std::vector<int>& arr) {
    std::vector<int> temp = arr;
    std::sort(temp.begin(), temp.end(), [](int a, int b) {
        return __builtin_popcount(a) < __builtin_popcount(b) ||
               (__builtin_popcount(a) == __builtin_popcount(b) && a < b);
    });
    return temp;
}

int main() {
    std::vector<int> input_arr;
    int n, num;
    std::cin >> n;
    
    for (int i = 0; i < n; ++i) {
        std::cin >> num;
        input_arr.push_back(num);
    }

    std::vector<int> sorted_arr = sort_array(input_arr);
    for (int num : sorted_arr) {
        std::cout << num << " ";
    }
    return 0;
}