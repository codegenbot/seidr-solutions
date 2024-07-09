#include <cassert>

int main() {
    std::vector<int> output = get_odd_collatz(10);
    assert(output == std::vector<int>{5, 3, 1});
    
    output = get_odd_collatz(19);
    assert(output == std::vector<int>{19, 29, 43, 65, 98, 49, 74, 37, 56, 28, 14, 7, 11, 17, 26, 13, 20, 10, 5, 8, 4, 2, 1});
    
    return 0;
}