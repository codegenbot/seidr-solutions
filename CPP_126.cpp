#include <iostream>
#include <vector>
#include <cassert> 

bool is_sorted(const std::vector<int>& lst) {
    for (size_t i = 0; i < lst.size() - 1; i++) {
        if (lst[i] >= lst[i + 1] || lst[i] == lst[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> input_vector;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        input_vector.push_back(num);
    }

    assert(is_sorted(input_vector) == true); 
    return 0;
}