#include <iostream>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> incr_list(std::vector<int> l) {
    for (int &num : l) {
        num++;
    }
    return l;
}

int main() {
    std::vector<int> original = {1, 2, 3, 4, 5};
    std::vector<int> modified = incr_list(original);
    
    if(issame(original, modified)) {
        std::cout << "Lists are the same after incrementing." << std::endl;
    } else {
        std::cout << "Lists are different after incrementing." << std::endl;
    }

    assert(issame(incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123}), {6, 3, 6, 3, 4, 4, 10, 1, 124}));

    return 0;
}