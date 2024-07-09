#include <iostream>
#include <vector>

int solutions(std::vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (i % 2 == 0 && lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    std::cout << solutions({3, 13, 2, 9}) << std::endl; 
    return 0;
}