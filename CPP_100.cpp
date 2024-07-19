#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

bool make_a_pile(std::vector<int>& a) {
    // Implement make_a_pile functionality here
    return true;
}

int main(){
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {1, 2, 3};

    assert(issame(vec1, vec2));

    return 0;
}