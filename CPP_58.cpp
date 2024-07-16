#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    return a == b;
}

std::vector<int> common(std::vector<int>& l1, std::vector<int>& l2) {
    std::sort(l1.begin(), l1.end());
    std::sort(l2.begin(), l2.end());
    std::vector<int> result;
    std::set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), std::back_inserter(result));
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result;
}

int main() {
    std::vector<int> l1 = {1, 2, 3, 4, 5};
    std::vector<int> l2 = {3, 4, 5, 6, 7};
    std::vector<int> result = common(l1, l2);
    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}