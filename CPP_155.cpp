#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> even_odd_count(int num) {
    std::vector<int> result(2, 0);
    std::string numStr = std::to_string(std::abs(num));
    
    for (char c : numStr) {
        if ((c - '0') % 2 == 0) {
            result[0]++;
        } else {
            result[1]++;
        }
    }

    return result;
}

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert (is_same(even_odd_count(0) , {1, 0}));
    
    return 0;
}