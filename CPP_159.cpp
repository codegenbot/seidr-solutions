#include <cassert>
#include <utility>
#include <vector> // Added for vector
#include <iostream> // Added for output

std::pair<int, int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = total > remaining ? remaining : total;
    int left = remaining - eaten;
    return std::make_pair(eaten, left);
}

bool issame(std::pair<int, int> a, std::pair<int, int> b) {
    return a == b; // Compare pairs for equality
}

int main() {
    assert(issame(eat(4, 5, 1), std::make_pair(5, 0)));
    std::cout << "Function 'issame' works correctly." << std::endl; // Output to test success
    return 0;
}