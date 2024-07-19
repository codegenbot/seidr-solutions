#include <vector>
#include <iostream>
#include <cassert>
#include <string>
#include <cstdlib>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> even_odd_count(int num) {
    std::vector<int> result(2, 0);
    std::string numStr = std::to_string(std::abs(num));
    
    for(char c : numStr){
        if((c - '0') % 2 == 0){
            result[0]++;
        } else {
            result[1]++;
        }
    }
    
    return result;
}

int main() {
    std::vector<int> a = even_odd_count(24680);
    std::vector<int> b = {4, 1}; // Expected result for 24680
    assert(issame(a, b) == true);

    std::vector<int> c = even_odd_count(-13579);
    std::vector<int> d = {0, 5}; // Expected result for -13579
    assert(issame(c, d) == true);
    
    return 0;
}