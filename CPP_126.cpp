```cpp
#include <iostream>
#include <vector>

bool is_sorted(std::vector<int> lst) {
    for (int i = 0; i < lst.size() - 1; ++i) {
        if (lst[i] >= lst[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> input;
    int num;
    while(std::cin >> num) {
        input.push_back(num);
    }
    if(is_sorted(input)) {
        std::cout << "The list is sorted." << std::endl;
    } else {
        std::cout << "The list is not sorted." << std::endl;
    }
    return 0;
}