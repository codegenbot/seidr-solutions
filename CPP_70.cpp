#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    sort(lst.begin(), lst.end());
    while (!lst.empty()) {
        result.push_back(*lst.begin());
        lst.erase(lst.begin());
        if (!lst.empty())
            sort(lst.begin(), lst.end());
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    std::vector<int> lst(n);
    
    for (int i = 0; i < n; i++) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> lst[i];
    }
    
    std::vector<int> result = strange_sort_list(lst);
    
    std::cout << "The sorted list is: ";
    
    for (int i : result) {
        std::cout << i << " ";
    }
    
    return 0;
}