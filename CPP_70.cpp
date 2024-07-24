#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

bool strange_sort_list(const std::vector<int>& vec){
    std::vector<int> sorted_vec = vec;
    std::sort(sorted_vec.begin(), sorted_vec.end());
    return vec == sorted_vec;
}

int main(){
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {1, 2, 3};

    std::cout << (issame(vec1, vec2) ? "Vectors are the same" : "Vectors are different") << std::endl;

    assert(issame(std::vector<int>{111111}, std::vector<int>{111111}));

    assert(strange_sort_list(std::vector<int>{111111}));

    return 0;
}