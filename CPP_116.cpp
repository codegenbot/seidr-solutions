#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int b){
        int countA = __builtin_popcount(a);
        int countB = __builtin_popcount(b);
        if(countA == countB){
            return a < b;
        }
        return countA < countB;
    });
    return arr;
}

int main() {
    std::vector<int> sorted = sort_array({2, 4, 8, 16, 32});
    std::vector<int> expected = {2, 4, 8, 16, 32};
    if (std::equal(sorted.begin(), sorted.end(), expected.begin())) {
        std::cout << "Array sorting is correct!" << std::endl;
    } else {
        std::cout << "Array sorting is incorrect!" << std::endl;
    }
    return 0;
}