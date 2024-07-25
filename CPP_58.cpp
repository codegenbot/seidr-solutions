#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    // Your implementation
}

int main() {
    std::vector<int> l1 = {2, 3, 5, 7, 11};
    std::vector<int> l2 = {3, 5, 7, 11, 13};

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