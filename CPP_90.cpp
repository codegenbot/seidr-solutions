#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    if (lst.size() < 2) return -1; 
    int max = *std::max_element(lst.begin(), lst.end());
    for (int i = max / 2; i >= 0; --i) {
        if (!std::binary_search(lst.begin(), lst.end(), i)) {
            return i;
        }
    }
    return -1; 
}

int main() {
    std::vector<int> lst = { -35, 34, 12, -45 };
    int result = next_smallest(lst);
    std::cout << "The smallest number greater than all elements in the list is: " << result << std::endl;
    return 0;
}