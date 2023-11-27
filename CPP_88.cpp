#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> sort_array(const std::vector<int>& array) {
    std::vector<int> sorted_array = array;
    int sum = array[0] + array[array.size() - 1];
    if (sum % 2 == 0) {
        std::sort(sorted_array.rbegin(), sorted_array.rend());
    } else {
        std::sort(sorted_array.begin(), sorted_array.end());
    }
    return sorted_array;
}

int sort_array_main() {
    std::vector<int> sorted_array = sort_array({21, 14, 23, 11});
    for (int i : sorted_array) {
        std::cout << i << " ";
    }
}

int main() {
    sort_array_main();
}