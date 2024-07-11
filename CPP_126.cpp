#include <iostream>
#include <vector>

bool is_sorted(const std::vector<int>& lst);

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> lst(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> lst[i];
    }

    if(is_sorted(lst)) {
        std::cout << "The list is sorted.\n";
    } else {
        std::cout << "The list is not sorted.\n";
    }
    
    return 0;
}

bool is_sorted(const std::vector<int>& lst) {
    for(int i = 1; i < lst.size(); ++i) {
        if(lst[i] <= lst[i-1]) {
            return false;
        }
    }
    return true;
}