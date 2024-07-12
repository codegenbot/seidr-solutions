#include <iostream>
#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

std::vector<int> incr_list(std::vector<int> l){
    std::vector<int> result;
    for(int i: l) {
        result.push_back(i+1);
    }
    return result;
}

int main() {
    std::vector<int> list = {1, 2, 3};
    std::vector<int> incr_list_val = incr_list(list);
    assert(issame(list, incr_list_val));
    for(int i: incr_list_val) {
        std::cout << i << " ";
    }
    return 0;
}