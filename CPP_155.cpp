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
    std::vector<int> test1 = even_odd_count(12345);
    assert(issame(test1, {2, 3}));

    std::vector<int> test2 = even_odd_count(2468);
    assert(issame(test2, {4, 0}));

    std::vector<int> test3 = even_odd_count(13579);
    assert(issame(test3, {0, 5}));

    std::vector<int> test4 = even_odd_count(-987654);
    assert(issame(test4, {3, 3}));

    std::cout << "All tests passed successfully." << std::endl;

    return 0;
}