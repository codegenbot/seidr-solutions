#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>
#include <functional>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sort_array(const std::vector<int>& arr) {
    std::vector<int> temp = arr;
    std::sort(temp.begin(), temp.end(), [](int a, int b) {
        return std::bitset<32>(a).count() < std::bitset<32>(b).count() ||
               (std::bitset<32>(a).count() == std::bitset<32>(b).count() && a < b);
    });
    return temp;
}

int main() {
    std::vector<int> sorted_arr = sort_array({2, 4, 8, 16, 32});
    for (int num : sorted_arr) {
        std::cout << num << " ";
    }
    return 0;
}