#include <iostream>

bool is_equal_to_sum_even(int n){
    return n >= 8 && (n - 8) % 4 == 0;
}

int main() {
    int n;
    std::cin >> n;
    
    std::cout << (is_equal_to_sum_even(n) ? "true" : "false") << std::endl;
    
    return 0;
}