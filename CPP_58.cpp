#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    // Your implementation
}

int main() {
    std::vector<int> l1 = {3, 1, 5, 2, 4};
    std::vector<int> l2 = {5, 2, 7, 3, 1};

    std::sort(l1.begin(), l1.end());
    std::sort(l2.begin(), l2.end());

    std::vector<int> result;
    std::set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), std::back_inserter(result));

    result.erase(std::unique(result.begin(), result.end()), result.end());

    for (int num : result) {
        std::cout << num << " ";
    }

    return 0;
}