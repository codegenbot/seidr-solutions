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
    int n, temp;
    
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::cout << "Enter the elements:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> temp;
        l.push_back(temp);
    }

    std::cout << std::boolalpha << pairs_sum_to_zero(l) << std::endl;
    return 0;
}