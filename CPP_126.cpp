```cpp
#include <iostream>
#include <vector>

bool is_sorted(const std::vector<int>& lst) {
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]) return false;
    }
    return true;
}

int main() {
    int n;
    std::cout << "Enter the size of the vector: ";
    std::cin >> n;

    std::vector<int> vec(n);
    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> vec[i];
    }

    if(is_sorted(vec)) {
        std::cout << "The vector is sorted." << std::endl;
    } else {
        std::cout << "The vector is not sorted." << std::endl;
    }

    return 0;
}