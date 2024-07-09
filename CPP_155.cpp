#include <iostream>
#include <vector>

std::vector<int> even_odd_count(int num) {
    std::vector<int> result(2, 0);
    while (num != 0) {
        int digit = num % 10;
        if (digit % 2 == 0)
            result[0]++;
        else
            result[1]++;
        num /= 10;
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a.size() == b.size() && a == b;
}

int main() {
    assert(even_odd_count(0).size() == 2);
    int expected = 1; 
    int actual = even_odd_count(expected).size();
    if (actual == expected) {
        std::cout << "Test passed." << std::endl;
    } else {
        std::cout << "Test failed. Expected: " << expected << ", Actual: " << actual << std::endl;
    }
    return 0;
}