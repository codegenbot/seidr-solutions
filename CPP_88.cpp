#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> array){
    if(array.empty()) return array;
    if((array.front() + array.back()) % 2 == 0)
        std::sort(array.begin(), array.end(), std::greater<int>());
    else
        std::sort(array.begin(), array.end());
    return array;
}

#define ASSERT_VECTOR_EQ(a, b) assert(std::equal(a.begin(), a.end(), b.begin(), b.end()))

int main() {
    int n;
    std::cin >> n;
    std::vector<int> input(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> input[i];
    }

    std::vector<int> sorted_array = sort_array(input);

    for (int num : sorted_array) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}