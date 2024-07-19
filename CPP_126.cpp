#include <iostream>
#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int> lst) {
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] <= lst[i - 1]) return false;
    }
    std::vector<int> temp(lst.begin(), lst.end());
    std::sort(temp.begin(), temp.end());
    for (int i = 0; i < lst.size(); i++) {
        if (temp[i] != lst[i]) return false;
    }
    return true;
}

int main() {
    assert(is_sorted({1, 2, 3, 4}) == true);
    std::cout << "Enter a list of integers separated by space: ";
    int n;
    std::cin >> n;
    std::vector<int> lst;
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        lst.push_back(x);
    }
    
    if(is_sorted(lst)) 
        std::cout << "The list is sorted.\n";
    else
        std::cout << "The list is not sorted.\n";

    return 0;
}