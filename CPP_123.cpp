#include <iostream>

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    
    std::vector<int> odd_collatz = get_odd_collatz(n);

    std::cout << "Odd Collatz Sequence:" << std::endl;
    for (int num : odd_collatz) {
        std::cout << num << " ";
    }

    return 0;
}