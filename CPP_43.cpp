#include <unordered_set>
#include <vector>
#include <iostream>

bool pairs_sum_to_zero(const std::vector<int>& l) {
    std::unordered_set<int> seen;
    for (int num : l) {
        if (seen.find(-num) != seen.end()) {
            return true;
        }
        seen.insert(num);
    }
    return false;
}

int main() {
    std::vector<int> l;
    int n, elem;
    
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> elem;
        l.push_back(elem);
    }
    
    std::cout << std::boolalpha << pairs_sum_to_zero(l) << std::endl;
    return 0;
}