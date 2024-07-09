#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    if (lst.size() < 2) return -1; 
    int max = *std::max_element(lst.begin(), lst.end());
    for (int i = max; i >= 0; --i) {
        if (std::find_if(lst.begin(), lst.end(), [i](int x){return x > i && x < max;}) == lst.end()) {
            return i;
        }
    }
    return -1; 
}

int main() {
    // Test the function
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    std::cout << "The next smallest is: " << next_smallest({-35, 34, 12, -45}) << std::endl;
    return 0;
}