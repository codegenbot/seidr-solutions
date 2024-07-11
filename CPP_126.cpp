#include <iostream>
#include <vector>

bool is_sorted(const std::vector<int>& lst) {
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] > lst[i]) return false;
    }
    return true;
}

int main() {
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;
    std::vector<int> vec(n);
    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> vec[i];
    }
    if(is_sorted(vec)) {
        std::cout << "The vector is sorted.\n";
    } else {
        std::cout << "The vector is not sorted.\n";
    }
    return 0;
}