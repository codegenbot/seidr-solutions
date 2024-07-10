#include <vector>
#include <initializer_list>
#include <ostream>

int sum(std::initializer_list<int> vec) {
    int total = 0;
    for (const auto& num : vec) {
        total += num;
    }
    return total;
}

int main() {
    assert(sum({127, 97, 8192}) == 1216);
    std::cout << "The sum is: " << sum({127, 97, 8192}) << std::endl; 
    return 0;
}