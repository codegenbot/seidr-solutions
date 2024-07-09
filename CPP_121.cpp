```cpp
#include <iostream>
#include <vector>
#include <cassert>

int sumOdd(std::vector<int> lst) {
    int sum = 0;
    for (int i : lst) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    return sum;
}

int solutions(std::vector<int> lst) { 
    int sum = sumOdd(lst);
    for (int i : lst) {
        if (i % 2 == 0 && i > 0)
            sum -= i; 
    }
    return sum;
}

int main() {
    std::vector<int> lst;
    std::string str;
    while (std::cin >> str) {
        lst.push_back(std::stoi(str));
    }
    int result = solutions(lst);
    assert(result == 25);
    std::cout << "Test passed.\n";
}